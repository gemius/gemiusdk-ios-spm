# GemiusSDK Swift Packages

The GemiusSDK for Apple platforms comes in three flavors:

| Package name            | Branch name | Description                                             |
|-------------------------|-------------|---------------------------------------------------------|
| **GemiusSDK_iOS**       | `ios`       | Version for the iOS platform                            |
| **GemiusSDK_iOS_AdMob** | `ios-admob` | Version for the iOS platform with Google AdMob support  |
| **GemiusSDK_tvOS**      | `tvos`      | Version for the tvOS platform                           |

## Integration Instructions

1. Open your project in Xcode and select **File > Add Package Dependencies...**
1. Enter the package URL: `https://github.com/gemius/gemiusdk-ios-spm` into the search field.
1. Click the **Dependency Rule** dropdown and select **Branch**.
1. Enter the branch name suitable for your project: `ios`, `ios-admob`, or `tvos`.
1. Ensure your desired project is selected in the **Add to Project** dropdown, then click the **Add Package** button.
1. In the popup window, ensure your desired target is selected in the **Add to Target** dropdown, then click
**Add Package**.

> [!NOTE]
> By default, the latest version of GemiusSDK from the selected branch will be installed, which is the recommended
> integration method. If you need to install a specific version, select **Commit** as the **Dependency Rule** and enter
> the hash of the commit corresponding to the desired version.
