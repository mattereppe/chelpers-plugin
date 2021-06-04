# @TEST-EXEC: zeek -NN CNR::utils |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
