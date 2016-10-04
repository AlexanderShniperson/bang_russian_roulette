// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestPlayerBet.proto

#ifndef PROTOBUF_MessageRequestPlayerBet_2eproto__INCLUDED
#define PROTOBUF_MessageRequestPlayerBet_2eproto__INCLUDED

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
#include "PlayerBetWinType.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageRequestPlayerBet_2eproto();
void protobuf_AssignDesc_MessageRequestPlayerBet_2eproto();
void protobuf_ShutdownFile_MessageRequestPlayerBet_2eproto();

class MessageRequestPlayerBet;

// ===================================================================

class MessageRequestPlayerBet : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageRequestPlayerBet) */ {
 public:
  MessageRequestPlayerBet();
  virtual ~MessageRequestPlayerBet();

  MessageRequestPlayerBet(const MessageRequestPlayerBet& from);

  inline MessageRequestPlayerBet& operator=(const MessageRequestPlayerBet& from) {
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

  static const MessageRequestPlayerBet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageRequestPlayerBet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageRequestPlayerBet* other);

  // implements Message ----------------------------------------------

  inline MessageRequestPlayerBet* New() const { return New(NULL); }

  MessageRequestPlayerBet* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageRequestPlayerBet& from);
  void MergeFrom(const MessageRequestPlayerBet& from);
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
  void InternalSwap(MessageRequestPlayerBet* other);
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

  // required int64 destPlayerId = 2 [default = 0];
  bool has_destplayerid() const;
  void clear_destplayerid();
  static const int kDestPlayerIdFieldNumber = 2;
  ::google::protobuf::int64 destplayerid() const;
  void set_destplayerid(::google::protobuf::int64 value);

  // required int64 amount = 3 [default = 0];
  bool has_amount() const;
  void clear_amount();
  static const int kAmountFieldNumber = 3;
  ::google::protobuf::int64 amount() const;
  void set_amount(::google::protobuf::int64 value);

  // required .PlayerBetWinType winType = 4 [default = pbwtWin];
  bool has_wintype() const;
  void clear_wintype();
  static const int kWinTypeFieldNumber = 4;
  ::PlayerBetWinType wintype() const;
  void set_wintype(::PlayerBetWinType value);

  // @@protoc_insertion_point(class_scope:MessageRequestPlayerBet)
 private:
  inline void set_has_roomid();
  inline void clear_has_roomid();
  inline void set_has_destplayerid();
  inline void clear_has_destplayerid();
  inline void set_has_amount();
  inline void clear_has_amount();
  inline void set_has_wintype();
  inline void clear_has_wintype();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 roomid_;
  ::google::protobuf::int64 destplayerid_;
  ::google::protobuf::int64 amount_;
  int wintype_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageRequestPlayerBet_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageRequestPlayerBet_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageRequestPlayerBet_2eproto();
  friend void protobuf_ShutdownFile_MessageRequestPlayerBet_2eproto();

  void InitAsDefaultInstance();
  static MessageRequestPlayerBet* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestPlayerBet

// required int64 roomId = 1 [default = 0];
inline bool MessageRequestPlayerBet::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRequestPlayerBet::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRequestPlayerBet::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRequestPlayerBet::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
inline ::google::protobuf::int64 MessageRequestPlayerBet::roomid() const {
  // @@protoc_insertion_point(field_get:MessageRequestPlayerBet.roomId)
  return roomid_;
}
inline void MessageRequestPlayerBet::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestPlayerBet.roomId)
}

// required int64 destPlayerId = 2 [default = 0];
inline bool MessageRequestPlayerBet::has_destplayerid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageRequestPlayerBet::set_has_destplayerid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageRequestPlayerBet::clear_has_destplayerid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageRequestPlayerBet::clear_destplayerid() {
  destplayerid_ = GOOGLE_LONGLONG(0);
  clear_has_destplayerid();
}
inline ::google::protobuf::int64 MessageRequestPlayerBet::destplayerid() const {
  // @@protoc_insertion_point(field_get:MessageRequestPlayerBet.destPlayerId)
  return destplayerid_;
}
inline void MessageRequestPlayerBet::set_destplayerid(::google::protobuf::int64 value) {
  set_has_destplayerid();
  destplayerid_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestPlayerBet.destPlayerId)
}

// required int64 amount = 3 [default = 0];
inline bool MessageRequestPlayerBet::has_amount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageRequestPlayerBet::set_has_amount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageRequestPlayerBet::clear_has_amount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageRequestPlayerBet::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
  clear_has_amount();
}
inline ::google::protobuf::int64 MessageRequestPlayerBet::amount() const {
  // @@protoc_insertion_point(field_get:MessageRequestPlayerBet.amount)
  return amount_;
}
inline void MessageRequestPlayerBet::set_amount(::google::protobuf::int64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestPlayerBet.amount)
}

// required .PlayerBetWinType winType = 4 [default = pbwtWin];
inline bool MessageRequestPlayerBet::has_wintype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageRequestPlayerBet::set_has_wintype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageRequestPlayerBet::clear_has_wintype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageRequestPlayerBet::clear_wintype() {
  wintype_ = 0;
  clear_has_wintype();
}
inline ::PlayerBetWinType MessageRequestPlayerBet::wintype() const {
  // @@protoc_insertion_point(field_get:MessageRequestPlayerBet.winType)
  return static_cast< ::PlayerBetWinType >(wintype_);
}
inline void MessageRequestPlayerBet::set_wintype(::PlayerBetWinType value) {
  assert(::PlayerBetWinType_IsValid(value));
  set_has_wintype();
  wintype_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestPlayerBet.winType)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRequestPlayerBet_2eproto__INCLUDED