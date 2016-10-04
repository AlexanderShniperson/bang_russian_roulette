// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestAuth.proto

#ifndef PROTOBUF_MessageRequestAuth_2eproto__INCLUDED
#define PROTOBUF_MessageRequestAuth_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "AuthType.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageRequestAuth_2eproto();
void protobuf_AssignDesc_MessageRequestAuth_2eproto();
void protobuf_ShutdownFile_MessageRequestAuth_2eproto();

class MessageRequestAuth;

// ===================================================================

class MessageRequestAuth : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageRequestAuth) */ {
 public:
  MessageRequestAuth();
  virtual ~MessageRequestAuth();

  MessageRequestAuth(const MessageRequestAuth& from);

  inline MessageRequestAuth& operator=(const MessageRequestAuth& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MessageRequestAuth& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageRequestAuth* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageRequestAuth* other);

  // implements Message ----------------------------------------------

  inline MessageRequestAuth* New() const { return New(NULL); }

  MessageRequestAuth* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageRequestAuth& from);
  void MergeFrom(const MessageRequestAuth& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageRequestAuth* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .eAuthType authType = 1 [default = atNone];
  bool has_authtype() const;
  void clear_authtype();
  static const int kAuthTypeFieldNumber = 1;
  ::eAuthType authtype() const;
  void set_authtype(::eAuthType value);

  // optional string login = 2;
  bool has_login() const;
  void clear_login();
  static const int kLoginFieldNumber = 2;
  const ::std::string& login() const;
  void set_login(const ::std::string& value);
  void set_login(const char* value);
  void set_login(const char* value, size_t size);
  ::std::string* mutable_login();
  ::std::string* release_login();
  void set_allocated_login(::std::string* login);

  // optional string password = 3;
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // optional string verifyCode = 4;
  bool has_verifycode() const;
  void clear_verifycode();
  static const int kVerifyCodeFieldNumber = 4;
  const ::std::string& verifycode() const;
  void set_verifycode(const ::std::string& value);
  void set_verifycode(const char* value);
  void set_verifycode(const char* value, size_t size);
  ::std::string* mutable_verifycode();
  ::std::string* release_verifycode();
  void set_allocated_verifycode(::std::string* verifycode);

  // @@protoc_insertion_point(class_scope:MessageRequestAuth)
 private:
  inline void set_has_authtype();
  inline void clear_has_authtype();
  inline void set_has_login();
  inline void clear_has_login();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_verifycode();
  inline void clear_has_verifycode();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr login_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::internal::ArenaStringPtr verifycode_;
  int authtype_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageRequestAuth_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageRequestAuth_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageRequestAuth_2eproto();
  friend void protobuf_ShutdownFile_MessageRequestAuth_2eproto();

  void InitAsDefaultInstance();
  static MessageRequestAuth* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestAuth

// required .eAuthType authType = 1 [default = atNone];
inline bool MessageRequestAuth::has_authtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRequestAuth::set_has_authtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRequestAuth::clear_has_authtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRequestAuth::clear_authtype() {
  authtype_ = 0;
  clear_has_authtype();
}
inline ::eAuthType MessageRequestAuth::authtype() const {
  // @@protoc_insertion_point(field_get:MessageRequestAuth.authType)
  return static_cast< ::eAuthType >(authtype_);
}
inline void MessageRequestAuth::set_authtype(::eAuthType value) {
  assert(::eAuthType_IsValid(value));
  set_has_authtype();
  authtype_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestAuth.authType)
}

// optional string login = 2;
inline bool MessageRequestAuth::has_login() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageRequestAuth::set_has_login() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageRequestAuth::clear_has_login() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageRequestAuth::clear_login() {
  login_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_login();
}
inline const ::std::string& MessageRequestAuth::login() const {
  // @@protoc_insertion_point(field_get:MessageRequestAuth.login)
  return login_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_login(const ::std::string& value) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestAuth.login)
}
inline void MessageRequestAuth::set_login(const char* value) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestAuth.login)
}
inline void MessageRequestAuth::set_login(const char* value, size_t size) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestAuth.login)
}
inline ::std::string* MessageRequestAuth::mutable_login() {
  set_has_login();
  // @@protoc_insertion_point(field_mutable:MessageRequestAuth.login)
  return login_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageRequestAuth::release_login() {
  // @@protoc_insertion_point(field_release:MessageRequestAuth.login)
  clear_has_login();
  return login_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_allocated_login(::std::string* login) {
  if (login != NULL) {
    set_has_login();
  } else {
    clear_has_login();
  }
  login_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), login);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestAuth.login)
}

// optional string password = 3;
inline bool MessageRequestAuth::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageRequestAuth::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageRequestAuth::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageRequestAuth::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
inline const ::std::string& MessageRequestAuth::password() const {
  // @@protoc_insertion_point(field_get:MessageRequestAuth.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestAuth.password)
}
inline void MessageRequestAuth::set_password(const char* value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestAuth.password)
}
inline void MessageRequestAuth::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestAuth.password)
}
inline ::std::string* MessageRequestAuth::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:MessageRequestAuth.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageRequestAuth::release_password() {
  // @@protoc_insertion_point(field_release:MessageRequestAuth.password)
  clear_has_password();
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestAuth.password)
}

// optional string verifyCode = 4;
inline bool MessageRequestAuth::has_verifycode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageRequestAuth::set_has_verifycode() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageRequestAuth::clear_has_verifycode() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageRequestAuth::clear_verifycode() {
  verifycode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_verifycode();
}
inline const ::std::string& MessageRequestAuth::verifycode() const {
  // @@protoc_insertion_point(field_get:MessageRequestAuth.verifyCode)
  return verifycode_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_verifycode(const ::std::string& value) {
  set_has_verifycode();
  verifycode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestAuth.verifyCode)
}
inline void MessageRequestAuth::set_verifycode(const char* value) {
  set_has_verifycode();
  verifycode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestAuth.verifyCode)
}
inline void MessageRequestAuth::set_verifycode(const char* value, size_t size) {
  set_has_verifycode();
  verifycode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestAuth.verifyCode)
}
inline ::std::string* MessageRequestAuth::mutable_verifycode() {
  set_has_verifycode();
  // @@protoc_insertion_point(field_mutable:MessageRequestAuth.verifyCode)
  return verifycode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageRequestAuth::release_verifycode() {
  // @@protoc_insertion_point(field_release:MessageRequestAuth.verifyCode)
  clear_has_verifycode();
  return verifycode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageRequestAuth::set_allocated_verifycode(::std::string* verifycode) {
  if (verifycode != NULL) {
    set_has_verifycode();
  } else {
    clear_has_verifycode();
  }
  verifycode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), verifycode);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestAuth.verifyCode)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRequestAuth_2eproto__INCLUDED
