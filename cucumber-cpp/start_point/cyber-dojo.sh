LANG=c
make --always-make 2>&1
# Test output can be formatted as progress or documentation
cucumber -f progress . -r .
