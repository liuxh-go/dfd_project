#ifdef DFD_TEST_NETWORK

#include <consensus/genesis/GenesisJson.hpp>
#include <consensus/genesis/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace dfdcore {
    namespace consensus {static const unsigned char raw_genesis_config0[] =
{
	0x00, 0x5f, 0x23, 0x5f, 0x00, 0x09, 0x02, 0x74, 0x30, 0x02, 0xc3, 0x7d, 0xbd,
	0x52, 0x8b, 0xfa, 0x56, 0x20, 0x27, 0x65, 0x6c, 0xb3, 0x13, 0x26, 0x4d, 0xad,
	0xc4, 0x7a, 0xd5, 0x5a, 0x1e, 0xaa, 0x86, 0xcc, 0x5a, 0xad, 0xaf, 0x7e, 0x36,
	0xeb, 0xec, 0x96, 0x02, 0x74, 0x31, 0x02, 0xa2, 0x9a, 0x8f, 0x5e, 0x38, 0xdd,
	0x77, 0x7b, 0xca, 0x22, 0x2b, 0xc3, 0x3c, 0x9e, 0x1f, 0xf3, 0xfe, 0x57, 0x80,
	0x91, 0xec, 0xdb, 0x63, 0x29, 0x0c, 0x17, 0x26, 0x70, 0x24, 0x55, 0xbb, 0x4f,
	0x02, 0x74, 0x32, 0x02, 0xda, 0xd2, 0xbe, 0x31, 0xf3, 0xe3, 0x36, 0xe0, 0x6a,
	0x59, 0x3b, 0xfe, 0xcd, 0xae, 0x55, 0x28, 0x17, 0x0c, 0x03, 0xd2, 0x2e, 0xd8,
	0xb0, 0xdc, 0x87, 0x98, 0x58, 0xf4, 0x79, 0xb3, 0xbd, 0xa2, 0x02, 0x74, 0x33,
	0x02, 0xb2, 0xfc, 0x08, 0x86, 0xed, 0x34, 0xb4, 0x72, 0x35, 0x60, 0x53, 0xda,
	0xfd, 0x9a, 0x7f, 0x4b, 0x5f, 0x7e, 0x28, 0x8c, 0xa4, 0x5e, 0x7b, 0x24, 0xe1,
	0xc4, 0x62, 0xe3, 0xb0, 0xcf, 0x52, 0x7c, 0x02, 0x74, 0x34, 0x03, 0x23, 0x69,
	0xc9, 0x69, 0x63, 0xea, 0x20, 0x80, 0x29, 0x89, 0x33, 0x47, 0x8b, 0xf3, 0x33,
	0x00, 0x78, 0xc3, 0x0a, 0xdb, 0x6e, 0x59, 0x19, 0x71, 0xa9, 0xbf, 0x91, 0xf2,
	0x31, 0xfe, 0x4a, 0x9b, 0x02, 0x74, 0x35, 0x02, 0x43, 0xbe, 0x1e, 0x69, 0xda,
	0x02, 0x80, 0x61, 0x5b, 0x73, 0x16, 0xbd, 0x94, 0x3b, 0x3b, 0x97, 0xe8, 0x52,
	0x8f, 0x02, 0x00, 0x76, 0x4b, 0x25, 0x6d, 0x4d, 0x1b, 0xc5, 0xd5, 0x38, 0x6f,
	0xf9, 0x02, 0x74, 0x36, 0x02, 0x9a, 0x16, 0xde, 0xed, 0xcf, 0x87, 0xff, 0x5c,
	0xe5, 0xba, 0x15, 0xd2, 0xe1, 0x31, 0x54, 0x82, 0x5f, 0x8f, 0x40, 0xa8, 0xd1,
	0xc8, 0xd6, 0x47, 0x0d, 0x39, 0x12, 0xe8, 0xc7, 0x06, 0xba, 0xc7, 0x02, 0x74,
	0x37, 0x03, 0x84, 0xca, 0xc2, 0x1d, 0x3e, 0x40, 0xfe, 0x63, 0x33, 0xed, 0x21,
	0x40, 0x32, 0x1c, 0xa8, 0x5b, 0x00, 0x3d, 0xfe, 0xef, 0x00, 0xcc, 0x11, 0xbb,
	0x7e, 0xd9, 0xd3, 0x84, 0xbd, 0x7e, 0x11, 0xac, 0x02, 0x74, 0x38, 0x03, 0x5b,
	0xc7, 0xa9, 0x29, 0x4c, 0x2f, 0x97, 0xe9, 0x3d, 0x62, 0x18, 0x85, 0x1e, 0xb5,
	0xb5, 0xc4, 0x3b, 0xf2, 0x25, 0x51, 0x8f, 0x9e, 0xac, 0x9c, 0x12, 0xcc, 0x91,
	0x15, 0x59, 0xc7, 0xec, 0x5f, 0x09, 0x22, 0x44, 0x38, 0x38, 0x6a, 0x4b, 0x62,
	0x4b, 0x36, 0x4a, 0x78, 0x36, 0x54, 0x39, 0x44, 0x61, 0x73, 0x44, 0x54, 0x32,
	0x4a, 0x68, 0x32, 0x78, 0x38, 0x48, 0x52, 0x61, 0x4c, 0x64, 0x4d, 0x4d, 0x5a,
	0x5a, 0x39, 0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00, 0x00, 0x22, 0x44, 0x55,
	0x4e, 0x6d, 0x61, 0x66, 0x34, 0x42, 0x64, 0x6e, 0x76, 0x38, 0x58, 0x64, 0x32,
	0x6f, 0x7a, 0x39, 0x4b, 0x36, 0x38, 0x33, 0x44, 0x48, 0x6a, 0x61, 0x71, 0x73,
	0x61, 0x38, 0x33, 0x72, 0x39, 0x41, 0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00,
	0x00, 0x22, 0x44, 0x39, 0x42, 0x41, 0x52, 0x36, 0x59, 0x6d, 0x73, 0x61, 0x53,
	0x39, 0x34, 0x46, 0x41, 0x59, 0x55, 0x36, 0x35, 0x6a, 0x73, 0x66, 0x7a, 0x54,
	0x39, 0x54, 0x4e, 0x36, 0x78, 0x59, 0x44, 0x38, 0x6a, 0x74, 0x00, 0x88, 0x52,
	0x6a, 0x74, 0x00, 0x00, 0x00, 0x22, 0x44, 0x38, 0x75, 0x7a, 0x6e, 0x35, 0x5a,
	0x46, 0x79, 0x72, 0x4e, 0x68, 0x66, 0x67, 0x73, 0x6b, 0x75, 0x63, 0x76, 0x52,
	0x47, 0x77, 0x75, 0x62, 0x48, 0x6e, 0x6f, 0x61, 0x33, 0x44, 0x50, 0x4b, 0x47,
	0x42, 0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00, 0x00, 0x22, 0x44, 0x4c, 0x61,
	0x58, 0x4b, 0x58, 0x31, 0x45, 0x6d, 0x4a, 0x37, 0x7a, 0x48, 0x4d, 0x71, 0x7a,
	0x4b, 0x34, 0x38, 0x65, 0x34, 0x39, 0x57, 0x71, 0x58, 0x54, 0x4a, 0x75, 0x47,
	0x38, 0x32, 0x37, 0x61, 0x43, 0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00, 0x00,
	0x22, 0x44, 0x46, 0x59, 0x64, 0x54, 0x64, 0x76, 0x70, 0x31, 0x32, 0x62, 0x32,
	0x61, 0x4c, 0x44, 0x42, 0x32, 0x6a, 0x33, 0x6d, 0x32, 0x37, 0x4c, 0x33, 0x66,
	0x6f, 0x65, 0x43, 0x43, 0x6f, 0x50, 0x35, 0x4d, 0x45, 0x00, 0x88, 0x52, 0x6a,
	0x74, 0x00, 0x00, 0x00, 0x22, 0x44, 0x4e, 0x34, 0x46, 0x70, 0x54, 0x4b, 0x6b,
	0x39, 0x32, 0x7a, 0x41, 0x4a, 0x45, 0x7a, 0x59, 0x73, 0x43, 0x72, 0x47, 0x73,
	0x5a, 0x4c, 0x54, 0x38, 0x4c, 0x43, 0x71, 0x61, 0x76, 0x47, 0x6b, 0x4d, 0x4b,
	0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00, 0x00, 0x22, 0x44, 0x4a, 0x35, 0x64,
	0x76, 0x76, 0x7a, 0x4b, 0x33, 0x76, 0x54, 0x57, 0x35, 0x6a, 0x77, 0x48, 0x43,
	0x38, 0x65, 0x72, 0x31, 0x7a, 0x34, 0x4c, 0x6d, 0x70, 0x51, 0x35, 0x78, 0x62,
	0x43, 0x52, 0x44, 0x68, 0x00, 0x88, 0x52, 0x6a, 0x74, 0x00, 0x00, 0x00, 0x22,
	0x44, 0x52, 0x33, 0x70, 0x6e, 0x61, 0x59, 0x56, 0x4a, 0x37, 0x5a, 0x61, 0x5a,
	0x71, 0x50, 0x75, 0x50, 0x53, 0x4c, 0x72, 0x47, 0x75, 0x5a, 0x4b, 0x7a, 0x44,
	0x76, 0x59, 0x63, 0x52, 0x37, 0x77, 0x50, 0x61, 0x00, 0x88, 0x52, 0x6a, 0x74,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GenesisState get_builtin_genesis_block_config()
{
  unsigned total_size = sizeof(raw_genesis_config0);
  std::unique_ptr<char[]> buffer(new char[total_size]);
  char *ptr = buffer.get();
  memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  ptr += sizeof(raw_genesis_config0);
  return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
}

fc::sha256 get_builtin_genesis_block_state_hash()
{
  fc::sha256::encoder encoder;
  encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  return encoder.result();
}
    }
} // end namespace dfdcore::consensus

#endif