include_guard(GLOBAL)
message("middleware_psatest_ns_crypto component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/platform/targets/common/nspe/crypto/pal_crypto_intf.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/common/test_crypto_common.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c001/test_c001.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c001/test_entry_c001.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c002/test_c002.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c002/test_entry_c002.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c003/test_c003.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c003/test_entry_c003.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c004/test_c004.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c004/test_entry_c004.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c005/test_c005.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c005/test_entry_c005.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c006/test_c006.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c006/test_entry_c006.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c007/test_c007.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c007/test_entry_c007.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c008/test_c008.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c008/test_entry_c008.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c009/test_c009.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c009/test_entry_c009.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c010/test_c010.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c010/test_entry_c010.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c011/test_c011.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c011/test_entry_c011.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c012/test_c012.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c012/test_entry_c012.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c013/test_c013.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c013/test_entry_c013.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c014/test_c014.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c014/test_entry_c014.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c015/test_c015.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c015/test_entry_c015.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c016/test_c016.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c016/test_entry_c016.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c017/test_c017.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c017/test_entry_c017.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c018/test_c018.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c018/test_entry_c018.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c019/test_c019.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c019/test_entry_c019.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c020/test_c020.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c020/test_entry_c020.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c021/test_c021.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c021/test_entry_c021.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c022/test_c022.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c022/test_entry_c022.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c023/test_c023.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c023/test_entry_c023.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c024/test_c024.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c024/test_entry_c024.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c025/test_c025.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c025/test_entry_c025.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c026/test_c026.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c026/test_entry_c026.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c027/test_c027.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c027/test_entry_c027.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c028/test_c028.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c028/test_entry_c028.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c029/test_c029.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c029/test_entry_c029.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c030/test_c030.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c030/test_entry_c030.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c031/test_c031.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c031/test_entry_c031.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c032/test_c032.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c032/test_entry_c032.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c033/test_c033.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c033/test_entry_c033.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c034/test_c034.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c034/test_entry_c034.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c035/test_c035.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c035/test_entry_c035.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c036/test_c036.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c036/test_entry_c036.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c037/test_c037.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c037/test_entry_c037.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c038/test_c038.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c038/test_entry_c038.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c039/test_c039.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c039/test_entry_c039.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c040/test_c040.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c040/test_entry_c040.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c041/test_c041.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c041/test_entry_c041.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c042/test_c042.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c042/test_entry_c042.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c043/test_c043.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c043/test_entry_c043.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c044/test_c044.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c044/test_entry_c044.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c045/test_c045.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c045/test_entry_c045.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c046/test_c046.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c046/test_entry_c046.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c047/test_c047.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c047/test_entry_c047.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c048/test_c048.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c048/test_entry_c048.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c049/test_c049.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c049/test_entry_c049.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c050/test_c050.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c050/test_entry_c050.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c051/test_c051.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c051/test_entry_c051.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c052/test_c052.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c052/test_entry_c052.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c053/test_c053.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c053/test_entry_c053.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c054/test_c054.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c054/test_entry_c054.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c055/test_c055.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c055/test_entry_c055.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c056/test_c056.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c056/test_entry_c056.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c057/test_c057.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c057/test_entry_c057.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c058/test_c058.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c058/test_entry_c058.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c059/test_c059.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c059/test_entry_c059.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c060/test_c060.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c060/test_entry_c060.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c061/test_c061.c
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c061/test_entry_c061.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/platform/targets/common/nspe/crypto
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/common
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c001
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c002
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c003
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c004
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c005
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c006
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c007
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c008
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c009
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c010
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c011
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c012
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c013
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c014
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c015
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c016
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c017
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c018
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c019
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c020
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c021
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c022
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c023
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c024
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c025
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c026
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c027
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c028
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c029
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c030
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c031
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c032
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c033
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c034
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c035
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c036
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c037
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c038
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c039
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c040
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c041
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c042
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c043
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c044
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c045
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c046
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c047
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c048
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c049
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c050
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c051
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c052
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c053
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c054
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c055
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c056
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c057
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c058
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c059
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c060
    ${CMAKE_CURRENT_LIST_DIR}/dev_apis/crypto/test_c061
)


