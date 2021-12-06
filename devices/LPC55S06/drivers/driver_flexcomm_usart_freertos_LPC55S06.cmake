include_guard(GLOBAL)
message("driver_flexcomm_usart_freertos component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_usart_freertos.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_flexcomm_LPC55S06)

include(driver_flexcomm_usart_LPC55S06)

include(middleware_freertos-kernel_LPC55S06)

