# Unity CI/CD template

## Goal

This repo automatically **tests & builds** a unity project in git actions and publishes it as webGL. Also an android build is published on the gh-pages branch.

This allows us to build things and have all tests ran. It gives a single place where the newest apks are placed and makes sure that no merge errors occur.

## usage

To use this template:

1. Create a new repo with this as template
2. git clone the repo
3. go to github actions and launch the 'activation' action.
4. follow the flow at [game.ci](https://game.ci/docs/github/activation) to activate the unity license
5. in the repo, copy/move an entire unity project in it.
6. with big changes, git commit & git push starts a new github action to build it
