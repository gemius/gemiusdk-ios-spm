// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GemiusSDK_tvOS",
    platforms: [
        .tvOS(.v12)
    ],
    products: [
        .library(
            name: "GemiusSDKtvOS",
            targets: ["GemiusSDKTarget"]
        ),
    ],
    targets: [
        .target(
            name: "GemiusSDKTarget",
            dependencies: ["GemiusSDKFramework"],
            linkerSettings: [
                .linkedFramework("AdSupport"),
                .linkedFramework("SystemConfiguration"),
                .unsafeFlags(["-ObjC"])
            ]
        ),
        .binaryTarget(
            name: "GemiusSDKFramework",
            path: "./Framework/GemiusSDKtvOS.xcframework"
        ),
    ]
)
