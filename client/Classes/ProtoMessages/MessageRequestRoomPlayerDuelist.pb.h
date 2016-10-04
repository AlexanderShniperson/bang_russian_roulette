// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestRoomPlayerDuelist.proto

#ifndef PROTOBUF_MessageRequestRoomPlayerDuelist_2eproto__INCLUDED
#define PROTOBUF_MessageRequestRoomPlayerDuelist_2eproto__INCLUDED

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
void protobuf_AddDesc_MessageRequestRoomPlayerDuelist_2eproto();
void protobuf_AssignDesc_MessageRequestRoomPlayerDuelist_2eproto();
void protobuf_ShutdownFile_MessageRequestRoomPlayerDuelist_2eproto();

class MessageRequestRoomPlayerDuelist;

// ===================================================================

class MessageRequestRoomPlayerDuelist : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageRequestRoomPlayerDuelist) */ {
 public:
  MessageRequestRoomPlayerDuelist();
  virtual ~MessageRequestRoomPlayerDuelist();

  MessageRequestRoomPlayerDuelist(const MessageRequestRoomPlayerDuelist& from);

  inline MessageRequestRoomPlayerDuelist& operator=(const MessageRequestRoomPlayerDuelist& from) {
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

  static const MessageRequestRoomPlayerDuelist& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageRequestRoomPlayerDuelist* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageRequestRoomPlayerDuelist* other);

  // implements Message ----------------------------------------------

  inline MessageRequestRoomPlayerDuelist* New() const { return New(NULL); }

  MessageRequestRoomPlayerDuelist* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageRequestRoomPlayerDuelist& from);
  void MergeFrom(const MessageRequestRoomPlayerDuelist& from);
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
  void InternalSwap(MessageRequestRoomPlayerDuelist* other);
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

  // required int64 roomId = 1 [default = 0];
  bool has_roomid() const;
  void clear_roomid();
  static const int kRoomIdFieldNumber = 1;
  ::google::protobuf::int64 roomid() const;
  void set_roomid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MessageRequestRoomPlayerDuelist)
 private:
  inline void set_has_roomid();
  inline void clear_has_roomid();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 roomid_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageRequestRoomPlayerDuelist_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageRequestRoomPlayerDuelist_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageRequestRoomPlayerDuelist_2eproto();
  friend void protobuf_ShutdownFile_MessageRequestRoomPlayerDuelist_2eproto();

  void InitAsDefaultInstance();
  static MessageRequestRoomPlayerDuelist* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestRoomPlayerDuelist

// required int64 roomId = 1 [default = 0];
inline bool MessageRequestRoomPlayerDuelist::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRequestRoomPlayerDuelist::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRequestRoomPlayerDuelist::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRequestRoomPlayerDuelist::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
inline ::google::protobuf::int64 MessageRequestRoomPlayerDuelist::roomid() const {
  // @@protoc_insertion_point(field_get:MessageRequestRoomPlayerDuelist.roomId)
  return roomid_;
}
inline void MessageRequestRoomPlayerDuelist::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestRoomPlayerDuelist.roomId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRequestRoomPlayerDuelist_2eproto__INCLUDED
