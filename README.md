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
## Working on a feature
```
git checkout -b <some_feature> development
git push --set-upstream origin <some_feature>
```
Then: commit and push changes to `<some_feature>`, merge to `development`, everyone tests `development` locally, merge `development` to `master`.
