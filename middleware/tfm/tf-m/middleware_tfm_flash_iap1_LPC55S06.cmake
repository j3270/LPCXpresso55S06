include_guard(GLOBAL)
message("middleware_tfm_flash_iap1 component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/platform/ext/target/nxp/common/CMSIS_Driver/Driver_Flash_iap1.c
)


include(driver_iap1_LPC55S06)

