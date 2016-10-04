// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponsePlayerBet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageResponsePlayerBet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageResponsePlayerBet_2eproto() {
  delete MessageResponsePlayerBet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageResponsePlayerBet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageResponsePlayerBet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_PlayerBetWinType_2eproto();
  MessageResponsePlayerBet::default_instance_ = new MessageResponsePlayerBet();
  MessageResponsePlayerBet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageResponsePlayerBet_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageResponsePlayerBet_2eproto_once_);
void protobuf_AddDesc_MessageResponsePlayerBet_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageResponsePlayerBet_2eproto_once_,
                 &protobuf_AddDesc_MessageResponsePlayerBet_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageResponsePlayerBet_2eproto {
  StaticDescriptorInitializer_MessageResponsePlayerBet_2eproto() {
    protobuf_AddDesc_MessageResponsePlayerBet_2eproto();
  }
} static_descriptor_initializer_MessageResponsePlayerBet_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageResponsePlayerBet(
    MessageResponsePlayerBet* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageResponsePlayerBet::kRoomIdFieldNumber;
const int MessageResponsePlayerBet::kSourcePlayerIdFieldNumber;
const int MessageResponsePlayerBet::kDestPlayerIdFieldNumber;
const int MessageResponsePlayerBet::kAmountFieldNumber;
const int MessageResponsePlayerBet::kWinTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageResponsePlayerBet::MessageResponsePlayerBet()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResponsePlayerBet)
}

void MessageResponsePlayerBet::InitAsDefaultInstance() {
}

MessageResponsePlayerBet::MessageResponsePlayerBet(const MessageResponsePlayerBet& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageResponsePlayerBet)
}

void MessageResponsePlayerBet::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomid_ = GOOGLE_LONGLONG(0);
  sourceplayerid_ = GOOGLE_LONGLONG(0);
  destplayerid_ = GOOGLE_LONGLONG(0);
  amount_ = GOOGLE_LONGLONG(0);
  wintype_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageResponsePlayerBet::~MessageResponsePlayerBet() {
  // @@protoc_insertion_point(destructor:MessageResponsePlayerBet)
  SharedDtor();
}

void MessageResponsePlayerBet::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageResponsePlayerBet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageResponsePlayerBet& MessageResponsePlayerBet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageResponsePlayerBet_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageResponsePlayerBet_2eproto();
#endif
  return *default_instance_;
}

MessageResponsePlayerBet* MessageResponsePlayerBet::default_instance_ = NULL;

MessageResponsePlayerBet* MessageResponsePlayerBet::New(::google::protobuf::Arena* arena) const {
  MessageResponsePlayerBet* n = new MessageResponsePlayerBet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResponsePlayerBet::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageResponsePlayerBet)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageResponsePlayerBet, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageResponsePlayerBet*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(roomid_, wintype_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageResponsePlayerBet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageResponsePlayerBet, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageResponsePlayerBet)
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
        if (input->ExpectTag(16)) goto parse_sourcePlayerId;
        break;
      }

      // required int64 sourcePlayerId = 2 [default = 0];
      case 2: {
        if (tag == 16) {
         parse_sourcePlayerId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sourceplayerid_)));
          set_has_sourceplayerid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_destPlayerId;
        break;
      }

      // required int64 destPlayerId = 3 [default = 0];
      case 3: {
        if (tag == 24) {
         parse_destPlayerId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &destplayerid_)));
          set_has_destplayerid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_amount;
        break;
      }

      // required int64 amount = 4 [default = 0];
      case 4: {
        if (tag == 32) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));
          set_has_amount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_winType;
        break;
      }

      // required .PlayerBetWinType winType = 5 [default = pbwtWin];
      case 5: {
        if (tag == 40) {
         parse_winType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PlayerBetWinType_IsValid(value)) {
            set_wintype(static_cast< ::PlayerBetWinType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(40);
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
  // @@protoc_insertion_point(parse_success:MessageResponsePlayerBet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResponsePlayerBet)
  return false;
#undef DO_
}

void MessageResponsePlayerBet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResponsePlayerBet)
  // required int64 roomId = 1 [default = 0];
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roomid(), output);
  }

  // required int64 sourcePlayerId = 2 [default = 0];
  if (has_sourceplayerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sourceplayerid(), output);
  }

  // required int64 destPlayerId = 3 [default = 0];
  if (has_destplayerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->destplayerid(), output);
  }

  // required int64 amount = 4 [default = 0];
  if (has_amount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->amount(), output);
  }

  // required .PlayerBetWinType winType = 5 [default = pbwtWin];
  if (has_wintype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->wintype(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageResponsePlayerBet)
}

int MessageResponsePlayerBet::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageResponsePlayerBet)
  int total_size = 0;

  if (has_roomid()) {
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());
  }

  if (has_sourceplayerid()) {
    // required int64 sourcePlayerId = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sourceplayerid());
  }

  if (has_destplayerid()) {
    // required int64 destPlayerId = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->destplayerid());
  }

  if (has_amount()) {
    // required int64 amount = 4 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  if (has_wintype()) {
    // required .PlayerBetWinType winType = 5 [default = pbwtWin];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->wintype());
  }

  return total_size;
}
int MessageResponsePlayerBet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageResponsePlayerBet)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());

    // required int64 sourcePlayerId = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->sourceplayerid());

    // required int64 destPlayerId = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->destplayerid());

    // required int64 amount = 4 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());

    // required .PlayerBetWinType winType = 5 [default = pbwtWin];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->wintype());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResponsePlayerBet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageResponsePlayerBet*>(&from));
}

void MessageResponsePlayerBet::MergeFrom(const MessageResponsePlayerBet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageResponsePlayerBet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
    if (from.has_sourceplayerid()) {
      set_sourceplayerid(from.sourceplayerid());
    }
    if (from.has_destplayerid()) {
      set_destplayerid(from.destplayerid());
    }
    if (from.has_amount()) {
      set_amount(from.amount());
    }
    if (from.has_wintype()) {
      set_wintype(from.wintype());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageResponsePlayerBet::CopyFrom(const MessageResponsePlayerBet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageResponsePlayerBet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResponsePlayerBet::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void MessageResponsePlayerBet::Swap(MessageResponsePlayerBet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResponsePlayerBet::InternalSwap(MessageResponsePlayerBet* other) {
  std::swap(roomid_, other->roomid_);
  std::swap(sourceplayerid_, other->sourceplayerid_);
  std::swap(destplayerid_, other->destplayerid_);
  std::swap(amount_, other->amount_);
  std::swap(wintype_, other->wintype_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageResponsePlayerBet::GetTypeName() const {
  return "MessageResponsePlayerBet";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponsePlayerBet

// required int64 roomId = 1 [default = 0];
bool MessageResponsePlayerBet::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResponsePlayerBet::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResponsePlayerBet::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResponsePlayerBet::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
 ::google::protobuf::int64 MessageResponsePlayerBet::roomid() const {
  // @@protoc_insertion_point(field_get:MessageResponsePlayerBet.roomId)
  return roomid_;
}
 void MessageResponsePlayerBet::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponsePlayerBet.roomId)
}

// required int64 sourcePlayerId = 2 [default = 0];
bool MessageResponsePlayerBet::has_sourceplayerid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageResponsePlayerBet::set_has_sourceplayerid() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageResponsePlayerBet::clear_has_sourceplayerid() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageResponsePlayerBet::clear_sourceplayerid() {
  sourceplayerid_ = GOOGLE_LONGLONG(0);
  clear_has_sourceplayerid();
}
 ::google::protobuf::int64 MessageResponsePlayerBet::sourceplayerid() const {
  // @@protoc_insertion_point(field_get:MessageResponsePlayerBet.sourcePlayerId)
  return sourceplayerid_;
}
 void MessageResponsePlayerBet::set_sourceplayerid(::google::protobuf::int64 value) {
  set_has_sourceplayerid();
  sourceplayerid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponsePlayerBet.sourcePlayerId)
}

// required int64 destPlayerId = 3 [default = 0];
bool MessageResponsePlayerBet::has_destplayerid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageResponsePlayerBet::set_has_destplayerid() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageResponsePlayerBet::clear_has_destplayerid() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageResponsePlayerBet::clear_destplayerid() {
  destplayerid_ = GOOGLE_LONGLONG(0);
  clear_has_destplayerid();
}
 ::google::protobuf::int64 MessageResponsePlayerBet::destplayerid() const {
  // @@protoc_insertion_point(field_get:MessageResponsePlayerBet.destPlayerId)
  return destplayerid_;
}
 void MessageResponsePlayerBet::set_destplayerid(::google::protobuf::int64 value) {
  set_has_destplayerid();
  destplayerid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponsePlayerBet.destPlayerId)
}

// required int64 amount = 4 [default = 0];
bool MessageResponsePlayerBet::has_amount() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MessageResponsePlayerBet::set_has_amount() {
  _has_bits_[0] |= 0x00000008u;
}
void MessageResponsePlayerBet::clear_has_amount() {
  _has_bits_[0] &= ~0x00000008u;
}
void MessageResponsePlayerBet::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
  clear_has_amount();
}
 ::google::protobuf::int64 MessageResponsePlayerBet::amount() const {
  // @@protoc_insertion_point(field_get:MessageResponsePlayerBet.amount)
  return amount_;
}
 void MessageResponsePlayerBet::set_amount(::google::protobuf::int64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:MessageResponsePlayerBet.amount)
}

// required .PlayerBetWinType winType = 5 [default = pbwtWin];
bool MessageResponsePlayerBet::has_wintype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void MessageResponsePlayerBet::set_has_wintype() {
  _has_bits_[0] |= 0x00000010u;
}
void MessageResponsePlayerBet::clear_has_wintype() {
  _has_bits_[0] &= ~0x00000010u;
}
void MessageResponsePlayerBet::clear_wintype() {
  wintype_ = 0;
  clear_has_wintype();
}
 ::PlayerBetWinType MessageResponsePlayerBet::wintype() const {
  // @@protoc_insertion_point(field_get:MessageResponsePlayerBet.winType)
  return static_cast< ::PlayerBetWinType >(wintype_);
}
 void MessageResponsePlayerBet::set_wintype(::PlayerBetWinType value) {
  assert(::PlayerBetWinType_IsValid(value));
  set_has_wintype();
  wintype_ = value;
  // @@protoc_insertion_point(field_set:MessageResponsePlayerBet.winType)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
