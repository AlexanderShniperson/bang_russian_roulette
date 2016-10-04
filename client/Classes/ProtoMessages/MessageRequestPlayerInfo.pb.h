// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestPlayerInfo.proto

#ifndef PROTOBUF_MessageRequestPlayerInfo_2eproto__INCLUDED
#define PROTOBUF_MessageRequestPlayerInfo_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageRequestPlayerInfo_2eproto();
void protobuf_AssignDesc_MessageRequestPlayerInfo_2eproto();
void protobuf_ShutdownFile_MessageRequestPlayerInfo_2eproto();

class MessageRequestPlayerInfo;

// ===================================================================

class MessageRequestPlayerInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageRequestPlayerInfo) */ {
 public:
  MessageRequestPlayerInfo();
  virtual ~MessageRequestPlayerInfo();

  MessageRequestPlayerInfo(const MessageRequestPlayerInfo& from);

  inline MessageRequestPlayerInfo& operator=(const MessageRequestPlayerInfo& from) {
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

  static const MessageRequestPlayerInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageRequestPlayerInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageRequestPlayerInfo* other);

  // implements Message ----------------------------------------------

  inline MessageRequestPlayerInfo* New() const { return New(NULL); }

  MessageRequestPlayerInfo* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageRequestPlayerInfo& from);
  void MergeFrom(const MessageRequestPlayerInfo& from);
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
  void InternalSwap(MessageRequestPlayerInfo* other);
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

  // required int64 playerId = 1 [default = 0];
  bool has_playerid() const;
  void clear_playerid();
  static const int kPlayerIdFieldNumber = 1;
  ::google::protobuf::int64 playerid() const;
  void set_playerid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MessageRequestPlayerInfo)
 private:
  inline void set_has_playerid();
  inline void clear_has_playerid();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 playerid_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageRequestPlayerInfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageRequestPlayerInfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageRequestPlayerInfo_2eproto();
  friend void protobuf_ShutdownFile_MessageRequestPlayerInfo_2eproto();

  void InitAsDefaultInstance();
  static MessageRequestPlayerInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestPlayerInfo

// required int64 playerId = 1 [default = 0];
inline bool MessageRequestPlayerInfo::has_playerid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRequestPlayerInfo::set_has_playerid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRequestPlayerInfo::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRequestPlayerInfo::clear_playerid() {
  playerid_ = GOOGLE_LONGLONG(0);
  clear_has_playerid();
}
inline ::google::protobuf::int64 MessageRequestPlayerInfo::playerid() const {
  // @@protoc_insertion_point(field_get:MessageRequestPlayerInfo.playerId)
  return playerid_;
}
inline void MessageRequestPlayerInfo::set_playerid(::google::protobuf::int64 value) {
  set_has_playerid();
  playerid_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestPlayerInfo.playerId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRequestPlayerInfo_2eproto__INCLUDED
