// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerShootDirection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerShootDirection.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_PlayerShootDirection_2eproto() {
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerShootDirection_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerShootDirection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerShootDirection_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerShootDirection_2eproto_once_);
void protobuf_AddDesc_PlayerShootDirection_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerShootDirection_2eproto_once_,
                 &protobuf_AddDesc_PlayerShootDirection_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerShootDirection_2eproto {
  StaticDescriptorInitializer_PlayerShootDirection_2eproto() {
    protobuf_AddDesc_PlayerShootDirection_2eproto();
  }
} static_descriptor_initializer_PlayerShootDirection_2eproto_;
#endif
bool PlayerShootDirection_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
