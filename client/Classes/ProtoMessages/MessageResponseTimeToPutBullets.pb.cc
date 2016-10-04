// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseTimeToPutBullets.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageResponseTimeToPutBullets.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageResponseTimeToPutBullets_2eproto() {
  delete MessageResponseTimeToPutBullets::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MessageResponseTimeToPutBullets::default_instance_ = new MessageResponseTimeToPutBullets();
  MessageResponseTimeToPutBullets::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageResponseTimeToPutBullets_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto_once_);
void protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto_once_,
                 &protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageResponseTimeToPutBullets_2eproto {
  StaticDescriptorInitializer_MessageResponseTimeToPutBullets_2eproto() {
    protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto();
  }
} static_descriptor_initializer_MessageResponseTimeToPutBullets_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageResponseTimeToPutBullets(
    MessageResponseTimeToPutBullets* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageResponseTimeToPutBullets::kRoomIdFieldNumber;
const int MessageResponseTimeToPutBullets::kTimeFieldNumber;
const int MessageResponseTimeToPutBullets::kPossibleBulletsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageResponseTimeToPutBullets::MessageResponseTimeToPutBullets()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResponseTimeToPutBullets)
}

void MessageResponseTimeToPutBullets::InitAsDefaultInstance() {
}

MessageResponseTimeToPutBullets::MessageResponseTimeToPutBullets(const MessageResponseTimeToPutBullets& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageResponseTimeToPutBullets)
}

void MessageResponseTimeToPutBullets::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomid_ = GOOGLE_LONGLONG(0);
  time_ = 0;
  possiblebullets_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageResponseTimeToPutBullets::~MessageResponseTimeToPutBullets() {
  // @@protoc_insertion_point(destructor:MessageResponseTimeToPutBullets)
  SharedDtor();
}

void MessageResponseTimeToPutBullets::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageResponseTimeToPutBullets::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageResponseTimeToPutBullets& MessageResponseTimeToPutBullets::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageResponseTimeToPutBullets_2eproto();
#endif
  return *default_instance_;
}

MessageResponseTimeToPutBullets* MessageResponseTimeToPutBullets::default_instance_ = NULL;

MessageResponseTimeToPutBullets* MessageResponseTimeToPutBullets::New(::google::protobuf::Arena* arena) const {
  MessageResponseTimeToPutBullets* n = new MessageResponseTimeToPutBullets;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResponseTimeToPutBullets::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageResponseTimeToPutBullets)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageResponseTimeToPutBullets, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageResponseTimeToPutBullets*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(roomid_, possiblebullets_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageResponseTimeToPutBullets::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageResponseTimeToPutBullets, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageResponseTimeToPutBullets)
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
        if (input->ExpectTag(24)) goto parse_possibleBullets;
        break;
      }

      // required int32 possibleBullets = 3 [default = 0];
      case 3: {
        if (tag == 24) {
         parse_possibleBullets:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &possiblebullets_)));
          set_has_possiblebullets();
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
  // @@protoc_insertion_point(parse_success:MessageResponseTimeToPutBullets)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResponseTimeToPutBullets)
  return false;
#undef DO_
}

void MessageResponseTimeToPutBullets::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResponseTimeToPutBullets)
  // required int64 roomId = 1 [default = 0];
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roomid(), output);
  }

  // required int32 time = 2 [default = 0];
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->time(), output);
  }

  // required int32 possibleBullets = 3 [default = 0];
  if (has_possiblebullets()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->possiblebullets(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageResponseTimeToPutBullets)
}

int MessageResponseTimeToPutBullets::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageResponseTimeToPutBullets)
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

  if (has_possiblebullets()) {
    // required int32 possibleBullets = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->possiblebullets());
  }

  return total_size;
}
int MessageResponseTimeToPutBullets::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageResponseTimeToPutBullets)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());

    // required int32 time = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time());

    // required int32 possibleBullets = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->possiblebullets());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResponseTimeToPutBullets::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageResponseTimeToPutBullets*>(&from));
}

void MessageResponseTimeToPutBullets::MergeFrom(const MessageResponseTimeToPutBullets& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageResponseTimeToPutBullets)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_possiblebullets()) {
      set_possiblebullets(from.possiblebullets());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageResponseTimeToPutBullets::CopyFrom(const MessageResponseTimeToPutBullets& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageResponseTimeToPutBullets)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResponseTimeToPutBullets::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MessageResponseTimeToPutBullets::Swap(MessageResponseTimeToPutBullets* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResponseTimeToPutBullets::InternalSwap(MessageResponseTimeToPutBullets* other) {
  std::swap(roomid_, other->roomid_);
  std::swap(time_, other->time_);
  std::swap(possiblebullets_, other->possiblebullets_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageResponseTimeToPutBullets::GetTypeName() const {
  return "MessageResponseTimeToPutBullets";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseTimeToPutBullets

// required int64 roomId = 1 [default = 0];
bool MessageResponseTimeToPutBullets::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResponseTimeToPutBullets::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResponseTimeToPutBullets::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResponseTimeToPutBullets::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
 ::google::protobuf::int64 MessageResponseTimeToPutBullets::roomid() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToPutBullets.roomId)
  return roomid_;
}
 void MessageResponseTimeToPutBullets::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToPutBullets.roomId)
}

// required int32 time = 2 [default = 0];
bool MessageResponseTimeToPutBullets::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageResponseTimeToPutBullets::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageResponseTimeToPutBullets::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageResponseTimeToPutBullets::clear_time() {
  time_ = 0;
  clear_has_time();
}
 ::google::protobuf::int32 MessageResponseTimeToPutBullets::time() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToPutBullets.time)
  return time_;
}
 void MessageResponseTimeToPutBullets::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToPutBullets.time)
}

// required int32 possibleBullets = 3 [default = 0];
bool MessageResponseTimeToPutBullets::has_possiblebullets() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageResponseTimeToPutBullets::set_has_possiblebullets() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageResponseTimeToPutBullets::clear_has_possiblebullets() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageResponseTimeToPutBullets::clear_possiblebullets() {
  possiblebullets_ = 0;
  clear_has_possiblebullets();
}
 ::google::protobuf::int32 MessageResponseTimeToPutBullets::possiblebullets() const {
  // @@protoc_insertion_point(field_get:MessageResponseTimeToPutBullets.possibleBullets)
  return possiblebullets_;
}
 void MessageResponseTimeToPutBullets::set_possiblebullets(::google::protobuf::int32 value) {
  set_has_possiblebullets();
  possiblebullets_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseTimeToPutBullets.possibleBullets)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
