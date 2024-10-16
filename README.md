# FormBuilderSDK

[![Platforms](https://img.shields.io/badge/Platforms-iOS-yellowgreen?style=flat)](https://img.shields.io/badge/Platforms-iOS-Green?style=flat)
[![Swift](https://img.shields.io/badge/Swift-5.10-orange?style=flat)](https://img.shields.io/badge/Swift-5.10-Orange?style=flat)
[![Swift Package Manager](https://img.shields.io/badge/Swift_Package_Manager-compatible-orange?style=flat)](https://img.shields.io/badge/Swift_Package_Manager-compatible-orange?style=flat)

## Requirements
| Platform | Minimum Swift Version | Installation |
| --- | --- | --- |
| iOS 15.0+ | 5.10 | [Swift Package Manager](#swift-package-manager), [Manual](#manually) |

## Installation

### Swift Package Manager

The [Swift Package Manager](https://swift.org/package-manager/) is a tool for automating the distribution of Swift code and is integrated into the `swift` compiler. 

Once you have your Swift project set up, adding FormBuilderSDK as a dependency is as easy as adding it to the `dependencies` value of your `Package.swift`.

```swift
dependencies: [
	.package(url: "https://github.com/infinno/FormBuilder.git", .upToNextMajor(from: "1.3.0"))
]
```

### Manually

1. Copy `FormBuilderSDK.xcframework` from the Framework folder to your project’s folder. 
2. In the Project Navigator click on the project file and then click on the target you want to use `FormBuilderSDK` in.
3. Drag `FormBuilderSDK.xcframework` from Finder to the Frameworks, Libraries, and Embedded Content section.
4. In the Embed column choose Embed & Sign from the drop down, if it isn’t chosen already.
5. Build & Run the app.

## Documentation
You can Option+Click on the methods and properties to view documentation.

## How to use?

The basic usage:

```swift
let formBuilder = FormBuilder(instanceURL: {YOUR_BACKEND_URL})

formBuilder.startProcess(withId: {A_PROCESS_ID}, callingServiceToken: {TOKEN}, delegate: delegate, didStartProcess: { result in
	switch result {
	case .success:
		// do something
	case .failure(let error):
		// handle error
	}
})
```

This creates an instance of `FormBuilder` pointing to your backend and then opens a new interface based on the type of the process corresponding to the provided ID. The `callingServiceToken` argument is a unique client identifier that will be stored in the submission.

In the `startProcess(withId:callingServiceToken:delegate:didStartProcess:)` method you should also pass an object conforming to the `FBSDelegate` protocol. The `FBSDelegate` protocol only defines one method `closedForm(onStepWithID:)` that is called when the user closes the FormBuilder interface and will give you the ID of the step where the user closed the framework UI.
The `didStartProcess` closure tells you whether opening the process was successful or there was some error.

---

```swift

let formBuilder = FormBuilder(instanceURL: {YOUR_BACKEND_URL})

formBuilder.openStep(withId: {A_STEP_ID}, delegate: delegate, didOpenStep: { result in
	switch result {
	case .success:
		// do something
	case .failure(let error):
		// handle error
	}
})
```

This creates an instance of `FormBuilder` pointing to your backend and then opens a new interface of a previously created process at the step which the user has reached before (e.g. if they have interrupted it for some reason). It can also just be the first step for a process that the backend has preconfigured in some way.

 In the `openStep(withId:delegate:didOpenStep:)` method you should also pass an object conforming to the `FBSDelegate` protocol. The `FBSDelegate` protocol only defines one method `closedForm(onStepWithID:)` that is called when the user closes the FormBuilder interface and will give you the ID of the step where the user closed the framework UI.
The `didOpenStep` closure tells you whether opening the process was successful or there was some error.

---

You provide an `URL` in the `FormBuilder` initialiser which points to your own FormBuilder/KYC instance.

```swift
let KYCBackendURL = URL(string: "https://your-kyc-backend.net/ss")!

let formBuilder = FormBuilder(instanceURL: KYCBackendURL) 
``` 

Optionally you can pass an `FBSAppearance` object to the `FormBuilder` initialiser with which you can configure some of the appearance of the labels, fields, buttons:

```swift
let appearance = FBSAppearance()
appearance.backgroundColor = .systemIndigo
appearance.tintColor = .systemGreen
appearance.buttonCornerStyle = .capsule
appearance.textColor = .white

let formBuilder = FormBuilder(instanceURL: KYCBackendURL, appearance: appearance)
```

If you don’t pass an appearance object, the SDK will use default values.
