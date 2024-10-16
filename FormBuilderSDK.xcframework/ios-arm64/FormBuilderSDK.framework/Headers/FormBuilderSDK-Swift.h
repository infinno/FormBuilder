#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0 effective-5.10 (swiftlang-6.0.0.9.10 clang-1600.0.26.2)
#ifndef FORMBUILDERSDK_SWIFT_H
#define FORMBUILDERSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FormBuilderSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UIColor;
@class UIFont;

SWIFT_CLASS_NAMED("FBSAppearance")
@interface FBSAppearance : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// The color which will be used to tint all the UI. Default is <a href="https://developer.apple.com/documentation/uikit/uicolor/3173141-systemblue">.systemBlue</a>.
@property (nonatomic, strong) UIColor * _Nonnull tintColor;
/// The color which will be used for the background of the form views.
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// The color for the text. Default is <a href="https://developer.apple.com/documentation/uikit/uicolor/3173131-label">.label</a>.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The font for the text in the forms (labels, inputs, buttons, etc). The default is the system <a href="https://developer.apple.com/documentation/uikit/uifont/textstyle/1616682-body">Body</a> font.
@property (nonatomic, strong) UIFont * _Nonnull font;
/// The font which will be used for the navigation titles. The default is the system <a href="https://developer.apple.com/documentation/uikit/uifont/textstyle/1616702-headline">Headline</a> font.
@property (nonatomic, strong) UIFont * _Nonnull navigationTitleFont;
/// Controls whether the close button is shown.
/// If you set it to <code>false</code> then the process will not be able to be interrupted by the user.
@property (nonatomic) BOOL showCloseButton;
/// The border style of the input fields. Default is <a href="https://developer.apple.com/documentation/uikit/uitextfield/borderstyle/roundedrect">.roundedRect</a>. Set to <a href="https://developer.apple.com/documentation/uikit/uitextfield/borderstyle/none">.none</a> for full customization.
@property (nonatomic) enum UITextBorderStyle inputBorderStyle;
/// The corner radius of the input fields. Default is 8 points. Applies only when <code>fieldBorderStyle</code> is <code>.none</code>.
@property (nonatomic) CGFloat inputCornerRadius;
/// The border width of the input fields. Default is 0 points. Applies only when <code>fieldBorderStyle</code> is <code>.none</code>.
@property (nonatomic) CGFloat inputBorderWidth;
/// The border color of the input fields. Default is gray. Applies only when <code>fieldBorderStyle</code> is <code>.none</code>.
@property (nonatomic, strong) UIColor * _Nonnull inputBorderColor;
/// The background color of the input fields. Default is <a href="https://developer.apple.com/documentation/uikit/uicolor/3173140-systembackground">.systemBackground</a>. Applies only when <code>fieldBorderStyle</code> is <code>.none</code>.
@property (nonatomic, strong) UIColor * _Nonnull inputBackgroundColor;
/// The font which will be used in the input fields. The default is the system <a href="https://developer.apple.com/documentation/uikit/uifont/textstyle/1616682-body">Body</a> font.
@property (nonatomic, strong) UIFont * _Nonnull inputFont;
/// The color for the text in the input fields. Default is <code>textColor</code>.
@property (nonatomic, strong) UIColor * _Nonnull inputTextColor;
/// The font which will be used in the buttons. The default is the system <a href="https://developer.apple.com/documentation/uikit/uifont/textstyle/1616682-body">Body</a> font.
@property (nonatomic, strong) UIFont * _Nonnull buttonFont;
/// The color for the text in the buttons. Default is <code>textColor</code>.
@property (nonatomic, strong) UIColor * _Nonnull buttonTextColor;
/// The minimum height of the buttons in points. If you do not set it the buttons will self-size.
/// May not apply to all buttons 😬
@property (nonatomic) CGFloat buttonMinimumHeight;
/// The distance from a control’s (text field, label, button) leading edge to the screen’s leading edge.
/// May not apply to all controls 😬
@property (nonatomic) CGFloat leadingSpace;
/// The corner radius of the buttons in points.
/// If this is set to anything other than <code>.nan</code>, the <code>buttonCornerStyle</code> is ignored. Default is <code>.nan</code>.
@property (nonatomic) CGFloat buttonCornerRadius;
@property (nonatomic, strong) UIFont * _Nonnull consentLinkButtonFont;
@property (nonatomic) BOOL embedInstructionsLabelInBubble;
@property (nonatomic, strong) UIColor * _Nonnull bubbleBackgroundColor;
@property (nonatomic) CGFloat bubbleCornerRadius;
/// The distance from a button’s leading edge to the screen’s leading edge.
/// May not apply to all buttons 😬
@property (nonatomic) CGFloat buttonLeadingSpace SWIFT_DEPRECATED_MSG("", "leadingSpace");
@end


SWIFT_CLASS_NAMED("FBSBackendError")
@interface FBSBackendError : NSObject
@end

@class NSString;

/// Methods you use to observe the state of the processes you initiated in FormBuilder.
/// Your delegate must be an instance of <code>UIViewController</code>.
SWIFT_PROTOCOL_NAMED("FBSDelegate")
@protocol FBSDelegate
/// Called when the user closes the <code>FormBuilder</code> interface and will give you the ID of the step where the user closed the framework UI.
/// \param id The ID of the step where the user closed the UI.
///
- (void)closedFormOnStepWithId:(NSString * _Nonnull)id;
@end

@class NSURL;

SWIFT_CLASS_NAMED("FormBuilder")
@interface FormBuilder : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) FBSAppearance * _Nonnull appearance;)
+ (FBSAppearance * _Nonnull)appearance SWIFT_WARN_UNUSED_RESULT;
+ (void)setAppearance:(FBSAppearance * _Nonnull)value;
/// Creates an instance of <code>FormBuilder</code>.
/// \code
/// let appearance = FBSAppearance()
/// appearance.backgroundColor = .systemIndigo
/// appearance.tintColor = .systemGreen
/// appearance.buttonCornerStyle = .capsule
/// appearance.textColor = .white
///
/// let formBuilder = FormBuilder(appearance: appearance)
///
/// \endcode\param instanceURL The URL of the FormBuilder/KYC instance, usually in the form of <code>https://your-kyc-backend.net/ss</code>. The URL has to use HTTPS. You must make sure you’re providing a valid URL.
///
/// \param appearance An optional parameter which is used to configure some of the appearance of the labels, fields, buttons. If you don’t pass an appearance object, the SDK will use default values.
///
- (nonnull instancetype)initWithInstanceURL:(NSURL * _Nonnull)instanceURL appearance:(FBSAppearance * _Nonnull)appearance OBJC_DESIGNATED_INITIALIZER;
/// asdas
/// Creates an instance of <code>FormBuilder</code>.
/// \code
/// let appearance = FBSAppearance()
/// appearance.backgroundColor = .systemIndigo
/// appearance.tintColor = .systemGreen
/// appearance.buttonCornerStyle = .capsule
/// appearance.textColor = .white
///
/// let formBuilder = FormBuilder(appearance: appearance)
///
/// \endcode\param formBuilderInstanceURL The URL of the FormBuilder/KYC instance. The URL has to use HTTPS. If not supplied or if the URL is invalid, the default URL will be used, so you must make sure you’re providing a valid URL.
///
/// \param appearance An optional parameter which is used to configure some of the appearance of the labels, fields, buttons. If you don’t pass an appearance object, the SDK will use default values.
///
- (nonnull instancetype)initWithFormBuilderInstanceURL:(NSURL * _Nullable)formBuilderInstanceURL appearance:(FBSAppearance * _Nonnull)appearance OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE_MSG("'init' has been renamed to 'initWithInstanceURL:appearance:': The instance’s URL is mandatory.");
/// Opens UI based on the type of the process corresponding to the provided ID.
/// An Objective-C-compatible version of the <code>startProcess(withId:callingServiceToken:delegate:didStartProcess:)</code> method.
/// \param id The UUID of the process you want to start.
///
/// \param callingServiceToken A unique client identifier that will be stored in the submission.
///
/// \param delegate A <code>UIViewController</code> conforming to the <code>FBSDelegate</code> protocol.
///
/// \param didStartProcess Tells you whether opening the process was successful or there was some error.
///
- (void)objc_startProcessWithId:(NSString * _Nonnull)id callingServiceToken:(NSString * _Nullable)callingServiceToken delegate:(id <FBSDelegate> _Nonnull)delegate didStartProcess:(void (^ _Nonnull)(BOOL, NSError * _Nullable))didStartProcess;
/// Opens the UI of a previously-created submission at the step which the user has reached before (e.g. if they have interrupted it for some reason). It can also just be the first step for a process that the backend has preconfigured in some way.
/// An Objective-C-compatible version of the <code>openStep(withId:delegate:didOpenStep:)</code> method.
/// \param id The UUID of the step you want to start at.
///
/// \param delegate A <code>UIViewController</code> conforming to the <code>FBSDelegate</code> protocol.
///
/// \param didStartProcess Tells you whether opening the step was successful or there was some error.
///
- (void)objc_openStepWithId:(NSString * _Nonnull)id delegate:(id <FBSDelegate> _Nonnull)delegate didOpenStep:(void (^ _Nonnull)(BOOL, NSError * _Nullable))didOpenStep;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end










#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
