add_subdirectory(uvm)

AUX_SOURCE_DIRECTORY(src/api API_SRC)
AUX_SOURCE_DIRECTORY(src/client CLIENT_SRC)
AUX_SOURCE_DIRECTORY(src/console CONSOLE_SRC)
AUX_SOURCE_DIRECTORY(src/db DB_SRC)
AUX_SOURCE_DIRECTORY(src/network NETWORK_SRC)
AUX_SOURCE_DIRECTORY(src/rpc RPC_SRC)
AUX_SOURCE_DIRECTORY(src/rpc_stubs RPC_STUBS_SRC)
AUX_SOURCE_DIRECTORY(src/utilities UTILITIES_SRC)
AUX_SOURCE_DIRECTORY(src/wallet WALLET_SRC)
AUX_SOURCE_DIRECTORY(src/consensus            CONSENSUS_SRC)
AUX_SOURCE_DIRECTORY(src/consensus/account    CONSENSUS_SRC_account)
AUX_SOURCE_DIRECTORY(src/consensus/address    CONSENSUS_SRC_address)
AUX_SOURCE_DIRECTORY(src/consensus/asset      CONSENSUS_SRC_asset)
AUX_SOURCE_DIRECTORY(src/consensus/balance    CONSENSUS_SRC_balance)
AUX_SOURCE_DIRECTORY(src/consensus/block      CONSENSUS_SRC_block)
AUX_SOURCE_DIRECTORY(src/consensus/chainstate CONSENSUS_SRC_chainstate)
AUX_SOURCE_DIRECTORY(src/consensus/contract   CONSENSUS_SRC_contract)
AUX_SOURCE_DIRECTORY(src/consensus/contract_engine  CONSENSUS_SRC_contract_engine)
AUX_SOURCE_DIRECTORY(src/consensus/genesis    CONSENSUS_SRC_genesis)
AUX_SOURCE_DIRECTORY(src/consensus/operation  CONSENSUS_SRC_operation)
AUX_SOURCE_DIRECTORY(src/consensus/property   CONSENSUS_SRC_property)
AUX_SOURCE_DIRECTORY(src/consensus/slate      CONSENSUS_SRC_slate)
AUX_SOURCE_DIRECTORY(src/consensus/slot       CONSENSUS_SRC_slot)
AUX_SOURCE_DIRECTORY(src/consensus/transaction      CONSENSUS_SRC_transaction)


ADD_DEFINITIONS("-DHAVE_CXX_STDHEADERS")
cmake_minimum_required(VERSION 2.8)
SET (CMAKE_CXX_COMPILER     "/usr/bin/g++")

# Boost settings
set(Boost_USE_STATIC_LIBS     ON)
set(Boost_USE_MULTITHREADED   ON)
set(Boost_USE_STATIC_RUNTIME  ON)

# Specify Boost libraries that will use.
FIND_PACKAGE( Boost REQUIRED COMPONENTS system program_options chrono context coroutine date_time exception filesystem iostreams locale thread )

set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -pthread -DDFD_GLOBAL_API_LOG=1" )
set(Boost_INCLUDE_DIR　"/usr/include/boost")
set(Boost_LIBRARY_DIR  "/usr/lib/x86_64-linux-gnu")

INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR}
        "include"
        "../fc/include"
        "../leveldb/include"
        "../miniupnp"
        "../openssl/include"
        "uvm/include"
)

LINK_DIRECTORIES( ${Boost_LIBRARY_DIR}
        "../fc"
        "../leveldb/out-static"
        "../miniupnp/miniupnpc"
        "../openssl"
        "../fc/vendor/secp256k1-zkp/src/project_secp256k1-build/.libs"
        "."
        "src/api"
        "src/client"
        "src/consensus"
        "src/console"
        "src/db"
        "src/network"
        "src/rpc"
        "src/rpc_stubs"
        "src/utilities"
        "src/wallet"
        "uvm"
)

set(SOURCE_FILES
	src/Main.cpp
)

add_library(blockchain ${API_SRC} ${CLIENT_SRC} ${CONSOLE_SRC} ${DB_SRC} ${NETWORK_SRC} ${RPC_SRC} ${RPC_STUBS_SRC} ${UTILITIES_SRC} ${WALLET_SRC}
                ${CONSENSUS_SRC}
                ${CONSENSUS_SRC_account} ${CONSENSUS_SRC_address} ${CONSENSUS_SRC_asset} ${CONSENSUS_SRC_balance} ${CONSENSUS_SRC_block} ${CONSENSUS_SRC_chainstate} ${CONSENSUS_SRC_contract}
                ${CONSENSUS_SRC_contract_engine} ${CONSENSUS_SRC_genesis} ${CONSENSUS_SRC_operation} ${CONSENSUS_SRC_property} ${CONSENSUS_SRC_slate} ${CONSENSUS_SRC_slot} ${CONSENSUS_SRC_transaction}
)


add_executable(dfd ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(dfd blockchain libuvm.a libfc.a libsecp256k1.a libleveldb.a libminiupnpc.a ${Boost_LIBRARIES} libcrypto.a dl)
