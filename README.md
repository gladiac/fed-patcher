## FED-Patcher
FED-Patcher (ForceEncrypt Disable Patcher) for custom Android ROMs

# Introduction
I created a tool - initially for the Nexus 9 (flounder|flounder\_lte) - that gets rid of the ForceEncrypt flag in a generic way (meaning it should work no matter what rom you are on). It does that by patching the currently installed boot.img.
I enhanced that tool to make it work for other devices too. (See the list below to see if your device is supported)

# Background
The Android CDD ([Compatibility Definition Document](http://static.googleusercontent.com/media/source.android.com/en/us/compatibility/android-cdd.pdf)) ~~suggests~~ **demands** that all devices with the appropriate horse power SHOULD MUST enable full disk-encryption (FDE) by default. Even though I support every step towards more security I have to criticize this approach. Full-disk-encryption comes at a price. Encryption takes time because some component has to de- and encrypt the stuff on the disk at some point and in current devices it's the CPU's task. Even though modern devices have quite fast CPU cores you can still easily feel the difference between FDE in the on- or off-state. The I/O is faster and boot-times take only half as long. (I did not do any scientific measurements though)
There is an ongoing discussion about this topic in cyanogenmod's gerrit for the nexus 9. Although it's a fun read it is pretty clear that this exchange of views is not going anywhere near a useful outcome. Additionally, Google's stock ROMs always have forced encryption enabled on newer devices.
Because performance is important to me and at least my tablet does not need the extra security I created the FED-Patcher (ForceEncrypt Disable Patcher).

