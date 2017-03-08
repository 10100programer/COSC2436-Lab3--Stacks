#!/bin/bash
## Linux Git Script ##
## Ask for commit ##
read -p "Please enter your commit: " commit
## add files into local git ##
git add .
## commit changes ##
git commit -m $commit
## Upload Changes ##
git push
