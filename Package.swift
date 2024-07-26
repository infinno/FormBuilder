// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
	name: "FormBuilder",
	platforms: [
		.iOS(.v15)
	],
	products: [
		.library(
			name: "FormBuilderSDK",
			targets: ["FormBuilderSDK"]),
	],
	targets: [
		// Targets are the basic building blocks of a package. A target can define a module or a test suite.
		// Targets can depend on other targets in this package, and on products in packages this package depends on.
		.binaryTarget(
			name: "FormBuilderSDK",
			path: "FormBuilderSDK.xcframework")
	],
	swiftLanguageVersions: [.v5]
)
