LANG=c
make --always-make
# Test output can be formatted as progress or documentation
cucumber -f progress . -r .
