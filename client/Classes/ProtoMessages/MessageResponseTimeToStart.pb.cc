// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseTimeToStart.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageResponseTimeToStart.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageResponseTimeToStart_2eproto() {
  delete MessageResponseTimeToStart::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageResponseTimeToStart_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageResponseTimeToStart_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_RoomShootDirection_2eproto();
  MessageResponseTimeToStart::default_instance_ = new MessageResponseTimeToStart();
  MessageResponseTimeToStart::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageResponseTimeToStart_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageResponseTimeToStart_2eproto_once_);
void protobuf_AddDesc_MessageResponseTimeToStart_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageResponseTimeToStart_2eproto_once_,
                 &protobuf_AddDesc_MessageResponseTimeToStart_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageResponseTimeToStart_2eproto {
  StaticDescriptorInitializer_MessageResponseTimeToStart_2eproto() {
    protobuf_AddDesc_MessageResponseTimeToStart_2eproto();
  }
} static_descriptor_initializer_MessageResponseTimeToStart_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageResponseTimeToStart(
    MessageResponseTimeToStart* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageResponseTimeToStart::kRoomIdFieldNumber;
const int MessageResponseTimeToStart::kTimeFieldNumber;
const int MessageResponseTimeToStart::kCurrentRoundFieldNumber;
const int MessageResponseTimeToStart::kIsChooseDuelistFieldNumber;
const int MessageResponseTimeToStart::kIsDuelFieldNumber;
const int MessageResponseTimeToStart::kShootDirectionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageResponseTimeToStart::MessageResponseTimeToStart()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResponseTimeToStart)
}

void MessageResponseTimeToStart::InitAsDefaultInstance() {
}

MessageResponseTimeToStart::MessageResponseTimeToStart(const MessageResponseTimeToStart& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageResponseTimeToStart)
}

void MessageResponseTimeToStart::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomid_ = GOOGLE_LONGLONG(0);
  time_ = 0;
  currentround_ = 1;
  ischooseduelist_ = false;
  isduel_ = false;
  shootdirection_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageResponseTimeToStart::~MessageResponseTimeToStart() {
  // @@protoc_insertion_point(destructor:MessageResponseTimeToStart)
  SharedDtor();
}

void MessageResponseTimeToStart::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageResponseTimeToStart::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageResponseTimeToStart& MessageResponseTimeToStart::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageResponseTimeToStart_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageResponseTimeToStart_2eproto();
#endif
  return *default_instance_;
}

MessageResponseTimeToStart* MessageResponseTimeToStart::default_instance_ = NULL;

MessageResponseTimeToStart* MessageResponseTimeToStart::New(::google::protobuf::Arena* arena) const {
  MessageResponseTimeToStart* n = new MessageResponseTimeToStart;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResponseTimeToStart::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageResponseTimeToStart)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageResponseTimeToStart, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageResponseTimeToStart*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(roomid_, time_);
    ZR_(ischooseduelist_, shootdirection_);
    currentround_ = 1;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageResponseTimeToStart::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageResponseTimeToStart, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageResponseTimeToStart)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 roomId = 1 [default = 0];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &roomid_)));
          set_has_roomid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_time;
        break;
      }

      // required int32 time = 2 [default = 0];
      case 2: {
        if (tag == 16) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_currentRound;
        break;
      }

      // required int32 currentRound = 3 [default = 1];
      case 3: {
        if (tag == 24) {
         parse_currentRound:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &currentround_)));
          set_has_currentround();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_isChooseDuelist;
        break;
      }

      // required bool isChooseDuelist = 4 [default = false];
      case 4: {
        if (tag == 32) {
         parse_isChooseDuelist:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ischooseduelist_)));
          set_has_ischooseduelist();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_isDuel;
        break;
      }

      // required bool isDuel = 5 [default = false];
      case 5: {
        if (tag == 40) {
         parse_isDuel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isduel_)));
          set_has_isduel();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_shootDirection;
        break;
      }

      // required .RoomShootDirection shootDirection = 6 [default = rsdLEFT];
      case 6: {
        if (tag == 48) {
         parse_shootDirection:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::RoomShootDirection_IsValid(value)) {
            set_shootdirection(static_cast< ::RoomShootDirection >(value));
          } else {
            unknown_fields_stream.WriteVarint32(48);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageResponseTimeToStart)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResponseTimeToStart)
  return false;
#undef DO_
}

void MessageResponseTimeToStart::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResponseTimeToStart)
  // required int64 roomId = 1 [default = 0];
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roomid(), output);
  }

  // required int32 time = 2 [default = 0];
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->time(), output);
  }

  // required int32 currentRound = 3 [default = 1];
  if (has_currentround()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->currentround(), output);
  }

  // required bool isChooseDuelist = 4 [default = false];
  if (has_ischooseduelist()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->ischooseduelist(), output);
  }

  // required bool isDuel = 5 [default = false];
  if (has_isduel()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->isduel(), output);
  }

  // required .RoomShootDirection shootDirection = 6 [default = rsdLEFT];
  if (has_shootdirection()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->shootdirection(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageResponseTimeToStart)
}

int MessageResponseTimeToStart::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageResponseTimeToStart)
  int total_size = 0;

  if (has_roomid()) {
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());
  }

  if (has_time()) {
    // required int32 time = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time());
  }

  if (has_currentround()) {
    // required int32 currentRound = 3 [default = 1];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->currentround());
  }

  if (has_ischooseduelist()) {
    // required bool isChooseDuelist = 4 [default = false];
    total_size += 1 + 1;
  }

  if (has_isduel()) {
    // required bool isDuel = 5 [default = false];
    total_size += 1 + 1;
  }

  if (has_shootdirection()) {
    // required .RoomShootDirection shootDirection = 6 [default = rsdLEFT];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->shootdirection());
  }

  return total_size;
}
int MessageResponseTimeToStart::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageResponseTimeToStart)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000003f) ^ 0x0000003f) == 0) {  // All required fields are present.
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());

    // required int32 time = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time());

    // required int32 currentRound = 3 [default = 1];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->currentround());

    // required bool isChooseDuelist = 4 [default = false];
    total_size += 1 + 1;

    // required bool isDuel = 5 [default = false];
    total_size += 1 + 1;

    // required .RoomShootDirection shootDirection = 6 [default = rsdLEFT];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->shootdirection());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResponseTimeToStart::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageResponseTimeToStart*>(&from));
}

void MessageResponseTimeToStart::MergeFrom(const MessageResponseTimeToStart& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageResponseTimeToStart)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_currentround()) {
      set_currentround(from.currentround());
    }
    if (from.has_ischooseduelist()) {
      set_ischooseduelist(from.ischooseduelist());
    }
    if (from.has_isduel()) {
      set_isduel(from.isduel());
    }
    if (from.has_shootdirection()) {
      set_shootdirection(from.shootdirection());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageResponseTimeToStart::CopyFrom(const MessageResponseTimeToStart& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageResponseTimeToStart)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResponseTimeToStart::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void MessageResponseTimeToStart::Swap(MessageResponseTimeToStart* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResponseTimeToStart::InternalSwap(MessageResponseTimeToStart* other) {
  std::swap(roomid_, other->roomid_);
  std::swap(time_, other->time_);
  std::swap(currentround_, other->currentround_);
  std::swap(ischooseduelist_, other->ischooseduelist_);
  std::swap(isduel_, other->isduel_);
  std::swap(shootdirection_, other->shootdirection_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageResponseTimeToStart::GetTypeName() const {
  return "MessageResponseTimeToStart";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseTimeToStart

// required int64 roomId = 1 [default = 0];
bool MessageResponseTimeToStart::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResponseTimeToStart::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResponseTimeToStart::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResponseTimeToStart::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
 ::google::protobuf::int64 MessageResponseTimeToStart::roomid() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.roomId)
  return roomid_;
}
 void MessageResponseTimeToStart::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.roomId)
}

// required int32 time = 2 [default = 0];
bool MessageResponseTimeToStart::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageResponseTimeToStart::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageResponseTimeToStart::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageResponseTimeToStart::clear_time() {
  time_ = 0;
  clear_has_time();
}
 ::google::protobuf::int32 MessageResponseTimeToStart::time() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.time)
  return time_;
}
 void MessageResponseTimeToStart::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.time)
}

// required int32 currentRound = 3 [default = 1];
bool MessageResponseTimeToStart::has_currentround() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageResponseTimeToStart::set_has_currentround() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageResponseTimeToStart::clear_has_currentround() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageResponseTimeToStart::clear_currentround() {
  currentround_ = 1;
  clear_has_currentround();
}
 ::google::protobuf::int32 MessageResponseTimeToStart::currentround() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.currentRound)
  return currentround_;
}
 void MessageResponseTimeToStart::set_currentround(::google::protobuf::int32 value) {
  set_has_currentround();
  currentround_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.currentRound)
}

// required bool isChooseDuelist = 4 [default = false];
bool MessageResponseTimeToStart::has_ischooseduelist() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MessageResponseTimeToStart::set_has_ischooseduelist() {
  _has_bits_[0] |= 0x00000008u;
}
void MessageResponseTimeToStart::clear_has_ischooseduelist() {
  _has_bits_[0] &= ~0x00000008u;
}
void MessageResponseTimeToStart::clear_ischooseduelist() {
  ischooseduelist_ = false;
  clear_has_ischooseduelist();
}
 bool MessageResponseTimeToStart::ischooseduelist() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.isChooseDuelist)
  return ischooseduelist_;
}
 void MessageResponseTimeToStart::set_ischooseduelist(bool value) {
  set_has_ischooseduelist();
  ischooseduelist_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.isChooseDuelist)
}

// required bool isDuel = 5 [default = false];
bool MessageResponseTimeToStart::has_isduel() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void MessageResponseTimeToStart::set_has_isduel() {
  _has_bits_[0] |= 0x00000010u;
}
void MessageResponseTimeToStart::clear_has_isduel() {
  _has_bits_[0] &= ~0x00000010u;
}
void MessageResponseTimeToStart::clear_isduel() {
  isduel_ = false;
  clear_has_isduel();
}
 bool MessageResponseTimeToStart::isduel() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.isDuel)
  return isduel_;
}
 void MessageResponseTimeToStart::set_isduel(bool value) {
  set_has_isduel();
  isduel_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.isDuel)
}

// required .RoomShootDirection shootDirection = 6 [default = rsdLEFT];
bool MessageResponseTimeToStart::has_shootdirection() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void MessageResponseTimeToStart::set_has_shootdirection() {
  _has_bits_[0] |= 0x00000020u;
}
void MessageResponseTimeToStart::clear_has_shootdirection() {
  _has_bits_[0] &= ~0x00000020u;
}
void MessageResponseTimeToStart::clear_shootdirection() {
  shootdirection_ = 0;
  clear_has_shootdirection();
}
 ::RoomShootDirection MessageResponseTimeToStart::shootdirection() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToStart.shootDirection)
  return static_cast< ::RoomShootDirection >(shootdirection_);
}
 void MessageResponseTimeToStart::set_shootdirection(::RoomShootDirection value) {
  assert(::RoomShootDirection_IsValid(value));
  set_has_shootdirection();
  shootdirection_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToStart.shootDirection)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)