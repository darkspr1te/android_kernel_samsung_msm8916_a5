mkdir $(pwd)/out
make -C $(pwd) O=$(pwd)/out msm8916_sec_defconfig VARIANT_DEFCONFIG=msm8916_sec_a53g_eur_defconfig SELINUX_DEFCONFIG=selinux_defconfig -Wno-uninitialized  -Wuninitialized
make -C $(pwd) O=$(pwd)/out -Wno-uninitialized -Wuninitialized
cp $(pwd)/out/arch/arm/boot/zImage $(pwd)/arch/arm/boot/zImage
