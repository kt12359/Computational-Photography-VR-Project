# Computational-Photography-VR-Project
Computational Photography VR final project

## Requirements
```
brew install git-lfs
git lfs install
```

## Getting Setup for Development
```
git fetch
git checkout --track origin/development
```
## Working on a feature
```
git checkout -b <some_feature> development
git push origin <some_feature>
```
Then: commit and push changes to `<some_feature>`, merge to `development`, everyone tests `development` locally, merge `development` to `master`.
