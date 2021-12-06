SET(CMAKE_ASM_FLAGS_DEBUG " \
    ${CMAKE_ASM_FLAGS_DEBUG} \
    -DDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -g \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_ASM_FLAGS_RELEASE " \
    ${CMAKE_ASM_FLAGS_RELEASE} \
    -DNDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_DEBUG " \
    ${CMAKE_C_FLAGS_DEBUG} \
    -DDEBUG \
    -DCPU_LPC55S06JBD64 \
    -DMBEDTLS_MCUX_CASPER_ECC=0 \
    -DMBEDTLS_MCUX_CASPER_PKHA=0 \
    -DTFM_CRYPTO_IOVEC_BUFFER_SIZE=2048 \
    -DPLAT_HAS_BOOT_SEED \
    -DTFM_LVL=2 \
    -DTFM_SPM_LOG_LEVEL=TFM_SPM_LOG_LEVEL_INFO \
    -DTFM_PARTITION_LOG_LEVEL=TFM_PARTITION_LOG_LEVEL_INFO \
    -DTFM_CRYPTO_ENGINE_BUF_SIZE=9400 \
    -DITS_MAX_ASSET_SIZE=512 \
    -DITS_NUM_ASSETS=5 \
    -DPS_MAX_ASSET_SIZE=512 \
    -DPS_NUM_ASSETS=5 \
    -DPS_CREATE_FLASH_LAYOUT \
    -DPS_WIPE_ALL \
    -DITS_CREATE_FLASH_LAYOUT \
    -DITS_WIPE_ALL \
    -DDAUTH_CHIP_DEFAULT \
    -DINCLUDE_TEST_CODE_AND_KEY_ID \
    -D__SEMIHOST_HARDFAULT_DISABLE \
    -DTFM_CRYPTO_TEST_ALG_CBC \
    -DTFM_CRYPTO_TEST_ALG_CCM \
    -DTFM_CRYPTO_TEST_ALG_CFB \
    -DTFM_CRYPTO_TEST_ALG_CTR \
    -DTFM_CRYPTO_TEST_ALG_GCM \
    -DTFM_CRYPTO_TEST_ALG_SHA_512 \
    -DTFM_CRYPTO_TEST_HKDF \
    -DTFM_PARTITION_INTERNAL_TRUSTED_STORAGE \
    -DTFM_PARTITION_CRYPTO \
    -DTFM_PARTITION_INITIAL_ATTESTATION \
    -DT_COSE_USE_PSA_CRYPTO \
    -DTFM_PARTITION_PLATFORM \
    -DTFM_PSA_API \
    -DCONFIG_TFM_ENABLE_MEMORY_PROTECT \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DENABLE_ATTESTATION_SERVICE_TESTS \
    -DMCUXPRESSO_SDK \
    -g \
    -O0 \
    -mcmse \
    -Os \
    -Wno-unused-variable \
    -Wno-unused-but-set-variable \
    -Wno-return-type \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_RELEASE " \
    ${CMAKE_C_FLAGS_RELEASE} \
    -DNDEBUG \
    -DCPU_LPC55S06JBD64 \
    -DMBEDTLS_MCUX_CASPER_ECC=0 \
    -DMBEDTLS_MCUX_CASPER_PKHA=0 \
    -DTFM_CRYPTO_IOVEC_BUFFER_SIZE=2048 \
    -DPLAT_HAS_BOOT_SEED \
    -DTFM_LVL=2 \
    -DTFM_SPM_LOG_LEVEL=TFM_SPM_LOG_LEVEL_INFO \
    -DTFM_PARTITION_LOG_LEVEL=TFM_PARTITION_LOG_LEVEL_INFO \
    -DTFM_CRYPTO_ENGINE_BUF_SIZE=9400 \
    -DITS_MAX_ASSET_SIZE=512 \
    -DITS_NUM_ASSETS=5 \
    -DPS_MAX_ASSET_SIZE=512 \
    -DPS_NUM_ASSETS=5 \
    -DPS_CREATE_FLASH_LAYOUT \
    -DPS_WIPE_ALL \
    -DITS_CREATE_FLASH_LAYOUT \
    -DITS_WIPE_ALL \
    -DDAUTH_CHIP_DEFAULT \
    -DINCLUDE_TEST_CODE_AND_KEY_ID \
    -D__SEMIHOST_HARDFAULT_DISABLE \
    -DTFM_CRYPTO_TEST_ALG_CBC \
    -DTFM_CRYPTO_TEST_ALG_CCM \
    -DTFM_CRYPTO_TEST_ALG_CFB \
    -DTFM_CRYPTO_TEST_ALG_CTR \
    -DTFM_CRYPTO_TEST_ALG_GCM \
    -DTFM_CRYPTO_TEST_ALG_SHA_512 \
    -DTFM_CRYPTO_TEST_HKDF \
    -DTFM_PARTITION_INTERNAL_TRUSTED_STORAGE \
    -DTFM_PARTITION_CRYPTO \
    -DTFM_PARTITION_INITIAL_ATTESTATION \
    -DT_COSE_USE_PSA_CRYPTO \
    -DTFM_PARTITION_PLATFORM \
    -DTFM_PSA_API \
    -DCONFIG_TFM_ENABLE_MEMORY_PROTECT \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DENABLE_ATTESTATION_SERVICE_TESTS \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcmse \
    -Wno-unused-variable \
    -Wno-unused-but-set-variable \
    -Wno-return-type \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_CXX_FLAGS_DEBUG " \
    ${CMAKE_CXX_FLAGS_DEBUG} \
    -DDEBUG \
    -DCPU_LPC55S06JBD64 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -g \
    -O0 \
    -mcmse \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_CXX_FLAGS_RELEASE " \
    ${CMAKE_CXX_FLAGS_RELEASE} \
    -DNDEBUG \
    -DCPU_LPC55S06JBD64 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcmse \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG " \
    ${CMAKE_EXE_LINKER_FLAGS_DEBUG} \
    -Wl,--cmse-implib \
    -Wl,--out-implib=./debug/tfm_regression_s_CMSE_lib.o \
    -g \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -T${ProjDirPath}/../../../../../../middleware/tfm/tf-m/platform/ext/target/nxp/common/armgcc/tfm_common_s_pre.ld -static \
")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE " \
    ${CMAKE_EXE_LINKER_FLAGS_RELEASE} \
    -Wl,--cmse-implib \
    -Wl,--out-implib=./release/tfm_regression_s_CMSE_lib.o \
    -mcpu=cortex-m33 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-sp-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -T${ProjDirPath}/../../../../../../middleware/tfm/tf-m/platform/ext/target/nxp/common/armgcc/tfm_common_s_pre.ld -static \
")
