// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseRoomPlayerInfo.proto

#ifndef PROTOBUF_MessageResponseRoomPlayerInfo_2eproto__INCLUDED
#define PROTOBUF_MessageResponseRoomPlayerInfo_2eproto__INCLUDED

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
#include "PlayerShootDirection.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageResponseRoomPlayerInfo_2eproto();
void protobuf_AssignDesc_MessageResponseRoomPlayerInfo_2eproto();
void protobuf_ShutdownFile_MessageResponseRoomPlayerInfo_2eproto();

class MessageResponseRoomPlayerInfo;

// ===================================================================

class MessageResponseRoomPlayerInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageResponseRoomPlayerInfo) */ {
 public:
  MessageResponseRoomPlayerInfo();
  virtual ~MessageResponseRoomPlayerInfo();

  MessageResponseRoomPlayerInfo(const MessageResponseRoomPlayerInfo& from);

  inline MessageResponseRoomPlayerInfo& operator=(const MessageResponseRoomPlayerInfo& from) {
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

  static const MessageResponseRoomPlayerInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageResponseRoomPlayerInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageResponseRoomPlayerInfo* other);

  // implements Message ----------------------------------------------

  inline MessageResponseRoomPlayerInfo* New() const { return New(NULL); }

  MessageResponseRoomPlayerInfo* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageResponseRoomPlayerInfo& from);
  void MergeFrom(const MessageResponseRoomPlayerInfo& from);
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
  void InternalSwap(MessageResponseRoomPlayerInfo* other);
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

  // required string playerName = 2 [default = ""];
  bool has_playername() const;
  void clear_playername();
  static const int kPlayerNameFieldNumber = 2;
  const ::std::string& playername() const;
  void set_playername(const ::std::string& value);
  void set_playername(const char* value);
  void set_playername(const char* value, size_t size);
  ::std::string* mutable_playername();
  ::std::string* release_playername();
  void set_allocated_playername(::std::string* playername);

  // required int32 playerPosition = 3 [default = 0];
  bool has_playerposition() const;
  void clear_playerposition();
  static const int kPlayerPositionFieldNumber = 3;
  ::google::protobuf::int32 playerposition() const;
  void set_playerposition(::google::protobuf::int32 value);

  // required bytes playerAvatar = 4 [default = "\000"];
  bool has_playeravatar() const;
  void clear_playeravatar();
  static const int kPlayerAvatarFieldNumber = 4;
  const ::std::string& playeravatar() const;
  void set_playeravatar(const ::std::string& value);
  void set_playeravatar(const char* value);
  void set_playeravatar(const void* value, size_t size);
  ::std::string* mutable_playeravatar();
  ::std::string* release_playeravatar();
  void set_allocated_playeravatar(::std::string* playeravatar);

  // required .PlayerShootDirection shootDirection = 5 [default = psdLEFT];
  bool has_shootdirection() const;
  void clear_shootdirection();
  static const int kShootDirectionFieldNumber = 5;
  ::PlayerShootDirection shootdirection() const;
  void set_shootdirection(::PlayerShootDirection value);

  // @@protoc_insertion_point(class_scope:MessageResponseRoomPlayerInfo)
 private:
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_playername();
  inline void clear_has_playername();
  inline void set_has_playerposition();
  inline void clear_has_playerposition();
  inline void set_has_playeravatar();
  inline void clear_has_playeravatar();
  inline void set_has_shootdirection();
  inline void clear_has_shootdirection();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 playerid_;
  ::google::protobuf::internal::ArenaStringPtr playername_;
  static ::std::string* _default_playeravatar_;
  ::google::protobuf::internal::ArenaStringPtr playeravatar_;
  ::google::protobuf::int32 playerposition_;
  int shootdirection_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageResponseRoomPlayerInfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageResponseRoomPlayerInfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageResponseRoomPlayerInfo_2eproto();
  friend void protobuf_ShutdownFile_MessageResponseRoomPlayerInfo_2eproto();

  void InitAsDefaultInstance();
  static MessageResponseRoomPlayerInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseRoomPlayerInfo

// required int64 playerId = 1 [default = 0];
inline bool MessageResponseRoomPlayerInfo::has_playerid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageResponseRoomPlayerInfo::set_has_playerid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageResponseRoomPlayerInfo::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageResponseRoomPlayerInfo::clear_playerid() {
  playerid_ = GOOGLE_LONGLONG(0);
  clear_has_playerid();
}
inline ::google::protobuf::int64 MessageResponseRoomPlayerInfo::playerid() const {
  // @@protoc_insertion_point(field_get:MessageResponseRoomPlayerInfo.playerId)
  return playerid_;
}
inline void MessageResponseRoomPlayerInfo::set_playerid(::google::protobuf::int64 value) {
  set_has_playerid();
  playerid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseRoomPlayerInfo.playerId)
}

// required string playerName = 2 [default = ""];
inline bool MessageResponseRoomPlayerInfo::has_playername() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageResponseRoomPlayerInfo::set_has_playername() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageResponseRoomPlayerInfo::clear_has_playername() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageResponseRoomPlayerInfo::clear_playername() {
  playername_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_playername();
}
inline const ::std::string& MessageResponseRoomPlayerInfo::playername() const {
  // @@protoc_insertion_point(field_get:MessageResponseRoomPlayerInfo.playerName)
  return playername_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponseRoomPlayerInfo::set_playername(const ::std::string& value) {
  set_has_playername();
  playername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageResponseRoomPlayerInfo.playerName)
}
inline void MessageResponseRoomPlayerInfo::set_playername(const char* value) {
  set_has_playername();
  playername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageResponseRoomPlayerInfo.playerName)
}
inline void MessageResponseRoomPlayerInfo::set_playername(const char* value, size_t size) {
  set_has_playername();
  playername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageResponseRoomPlayerInfo.playerName)
}
inline ::std::string* MessageResponseRoomPlayerInfo::mutable_playername() {
  set_has_playername();
  // @@protoc_insertion_point(field_mutable:MessageResponseRoomPlayerInfo.playerName)
  return playername_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageResponseRoomPlayerInfo::release_playername() {
  // @@protoc_insertion_point(field_release:MessageResponseRoomPlayerInfo.playerName)
  clear_has_playername();
  return playername_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponseRoomPlayerInfo::set_allocated_playername(::std::string* playername) {
  if (playername != NULL) {
    set_has_playername();
  } else {
    clear_has_playername();
  }
  playername_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), playername);
  // @@protoc_insertion_point(field_set_allocated:MessageResponseRoomPlayerInfo.playerName)
}

// required int32 playerPosition = 3 [default = 0];
inline bool MessageResponseRoomPlayerInfo::has_playerposition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageResponseRoomPlayerInfo::set_has_playerposition() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageResponseRoomPlayerInfo::clear_has_playerposition() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageResponseRoomPlayerInfo::clear_playerposition() {
  playerposition_ = 0;
  clear_has_playerposition();
}
inline ::google::protobuf::int32 MessageResponseRoomPlayerInfo::playerposition() const {
  // @@protoc_insertion_point(field_get:MessageResponseRoomPlayerInfo.playerPosition)
  return playerposition_;
}
inline void MessageResponseRoomPlayerInfo::set_playerposition(::google::protobuf::int32 value) {
  set_has_playerposition();
  playerposition_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseRoomPlayerInfo.playerPosition)
}

// required bytes playerAvatar = 4 [default = "\000"];
inline bool MessageResponseRoomPlayerInfo::has_playeravatar() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageResponseRoomPlayerInfo::set_has_playeravatar() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageResponseRoomPlayerInfo::clear_has_playeravatar() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageResponseRoomPlayerInfo::clear_playeravatar() {
  playeravatar_.ClearToDefaultNoArena(_default_playeravatar_);
  clear_has_playeravatar();
}
inline const ::std::string& MessageResponseRoomPlayerInfo::playeravatar() const {
  // @@protoc_insertion_point(field_get:MessageResponseRoomPlayerInfo.playerAvatar)
  return playeravatar_.GetNoArena(_default_playeravatar_);
}
inline void MessageResponseRoomPlayerInfo::set_playeravatar(const ::std::string& value) {
  set_has_playeravatar();
  playeravatar_.SetNoArena(_default_playeravatar_, value);
  // @@protoc_insertion_point(field_set:MessageResponseRoomPlayerInfo.playerAvatar)
}
inline void MessageResponseRoomPlayerInfo::set_playeravatar(const char* value) {
  set_has_playeravatar();
  playeravatar_.SetNoArena(_default_playeravatar_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageResponseRoomPlayerInfo.playerAvatar)
}
inline void MessageResponseRoomPlayerInfo::set_playeravatar(const void* value, size_t size) {
  set_has_playeravatar();
  playeravatar_.SetNoArena(_default_playeravatar_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageResponseRoomPlayerInfo.playerAvatar)
}
inline ::std::string* MessageResponseRoomPlayerInfo::mutable_playeravatar() {
  set_has_playeravatar();
  // @@protoc_insertion_point(field_mutable:MessageResponseRoomPlayerInfo.playerAvatar)
  return playeravatar_.MutableNoArena(_default_playeravatar_);
}
inline ::std::string* MessageResponseRoomPlayerInfo::release_playeravatar() {
  // @@protoc_insertion_point(field_release:MessageResponseRoomPlayerInfo.playerAvatar)
  clear_has_playeravatar();
  return playeravatar_.ReleaseNoArena(_default_playeravatar_);
}
inline void MessageResponseRoomPlayerInfo::set_allocated_playeravatar(::std::string* playeravatar) {
  if (playeravatar != NULL) {
    set_has_playeravatar();
  } else {
    clear_has_playeravatar();
  }
  playeravatar_.SetAllocatedNoArena(_default_playeravatar_, playeravatar);
  // @@protoc_insertion_point(field_set_allocated:MessageResponseRoomPlayerInfo.playerAvatar)
}

// required .PlayerShootDirection shootDirection = 5 [default = psdLEFT];
inline bool MessageResponseRoomPlayerInfo::has_shootdirection() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MessageResponseRoomPlayerInfo::set_has_shootdirection() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MessageResponseRoomPlayerInfo::clear_has_shootdirection() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MessageResponseRoomPlayerInfo::clear_shootdirection() {
  shootdirection_ = 0;
  clear_has_shootdirection();
}
inline ::PlayerShootDirection MessageResponseRoomPlayerInfo::shootdirection() const {
  // @@protoc_insertion_point(field_get:MessageResponseRoomPlayerInfo.shootDirection)
  return static_cast< ::PlayerShootDirection >(shootdirection_);
}
inline void MessageResponseRoomPlayerInfo::set_shootdirection(::PlayerShootDirection value) {
  assert(::PlayerShootDirection_IsValid(value));
  set_has_shootdirection();
  shootdirection_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseRoomPlayerInfo.shootDirection)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageResponseRoomPlayerInfo_2eproto__INCLUDED
