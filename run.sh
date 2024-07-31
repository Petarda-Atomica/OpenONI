# Delete cache
rm -r build

# Make build
mkdir build
cd build

# Build project
cmake ..
make

echo "
=======================================
            Project built!
=======================================
"
# Run project
./OpenONI