#!/usr/bin/env bash

echo "Moving..."
mv $1 $2
echo "Changing directory..."
cd $2
echo "Renaming..."
rename 's/{print \$1}/{print \$2}/g;' *
echo "Refactoring..."
perl -pi -w -e 's/{print \$1}/{print \$2}/g;' *
