# Computational-Photography-VR-Project
Computational Photography VR final project

## Requirements
```
brew install git-lfs
git lfs install
```
## Building and Running
```
First build in Unity for iOS:
    - Save as "App"
    - Select Append **Do NOT select Replace
Open Computational-Photography-VR-Project Folder
Open App folder
Open Unity-iPhone xcode project
Set up signing and capabilities:
    - Select Automatically Manage Signing
    - Choose your apple account as the developer account
Build project for running
Run
```

## Getting Setup for Development
```
git fetch
git checkout --track origin/development
```
### Getting the Provisioning Profile
- Generate a certificate in xcode.
  - Xcode
  - Preferences
  - Select your Apple ID
  - Select the PSU Team
  - Manage Certificates
  - Add one if there isn't already one
- Add your device UUID to the Developer Portal
  - Connect your phone to your laptop
  - Open iTunes on your laptop (yes, this is strange)
  - Select your device
  - Find the UDID
  - Add that to the Developer Portal
- Add to Profile
  - Open our Profile in the Developer Portal
  - Select your Device and Certificate
  - Save
- Using the Profile
  - Download
  - Make sure Xcode is open
  - Double click the downloaded file
  - Go to signing and capabilities in xcode
  - UNCHECK Automatically manage...
  - Select the PSU Team
  - Bundle Identifier = com.psu.daltonandkt
  - Provisioning Profile = Dalton and KT...
## Working on a feature
```
git checkout -b <some_feature> development
git push --set-upstream origin <some_feature>
```
Then: commit and push changes to `<some_feature>`, merge to `development`, everyone tests `development` locally, merge `development` to `master`.
