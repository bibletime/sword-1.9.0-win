#
# First enter dependencies/ and run make
#
# For Universal libSWORD.a use XCode and compile SWORD/SWORD.xcodeproj
# then if you'd like to add ios support to the ../cordova bindings,
# this Makefile in here will copy the Universal lib and other deps
# to the correct locations
#
# just type: make
#

all: deploycordova

deploycordova:
	mkdir -p ../cordova/cordova-plugin-crosswire-sword/libs/ios/
	cp ./dependencies/curl/lib/libcurl.a ../cordova/cordova-plugin-crosswire-sword/libs/ios/
#	cp ./Build/Debug-iphonesimulator/libSWORD.a ../cordova/cordova-plugin-crosswire-sword/libs/ios/
#	cp ./Build/Debug-iphoneos/libSWORD.a ../cordova/cordova-plugin-crosswire-sword/libs/ios/
	cp SWORD/Release-universal/libSWORD.a ../cordova/cordova-plugin-crosswire-sword/libs/ios/
	cp ../../include/defs.h ../../include/flatapi.h ../cordova/cordova-plugin-crosswire-sword/src/ios/



