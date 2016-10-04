// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestRegistration.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageRequestRegistration.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageRequestRegistration_2eproto() {
  delete MessageRequestRegistration::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageRequestRegistration_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageRequestRegistration_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_AuthType_2eproto();
  MessageRequestRegistration::default_instance_ = new MessageRequestRegistration();
  MessageRequestRegistration::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageRequestRegistration_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageRequestRegistration_2eproto_once_);
void protobuf_AddDesc_MessageRequestRegistration_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageRequestRegistration_2eproto_once_,
                 &protobuf_AddDesc_MessageRequestRegistration_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageRequestRegistration_2eproto {
  StaticDescriptorInitializer_MessageRequestRegistration_2eproto() {
    protobuf_AddDesc_MessageRequestRegistration_2eproto();
  }
} static_descriptor_initializer_MessageRequestRegistration_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageRequestRegistration(
    MessageRequestRegistration* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageRequestRegistration::kAuthTypeFieldNumber;
const int MessageRequestRegistration::kLoginFieldNumber;
const int MessageRequestRegistration::kPasswordFieldNumber;
const int MessageRequestRegistration::kDisplayNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageRequestRegistration::MessageRequestRegistration()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageRequestRegistration)
}

void MessageRequestRegistration::InitAsDefaultInstance() {
}

MessageRequestRegistration::MessageRequestRegistration(const MessageRequestRegistration& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageRequestRegistration)
}

void MessageRequestRegistration::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  authtype_ = 0;
  login_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  displayname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageRequestRegistration::~MessageRequestRegistration() {
  // @@protoc_insertion_point(destructor:MessageRequestRegistration)
  SharedDtor();
}

void MessageRequestRegistration::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  login_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  displayname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageRequestRegistration::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageRequestRegistration& MessageRequestRegistration::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageRequestRegistration_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageRequestRegistration_2eproto();
#endif
  return *default_instance_;
}

MessageRequestRegistration* MessageRequestRegistration::default_instance_ = NULL;

MessageRequestRegistration* MessageRequestRegistration::New(::google::protobuf::Arena* arena) const {
  MessageRequestRegistration* n = new MessageRequestRegistration;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageRequestRegistration::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageRequestRegistration)
  if (_has_bits_[0 / 32] & 15u) {
    authtype_ = 0;
    if (has_login()) {
      login_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_password()) {
      password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_displayname()) {
      displayname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageRequestRegistration::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageRequestRegistration, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageRequestRegistration)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .eAuthType authType = 1 [default = atNone];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::eAuthType_IsValid(value)) {
            set_authtype(static_cast< ::eAuthType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_login;
        break;
      }

      // required string login = 2;
      case 2: {
        if (tag == 18) {
         parse_login:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_login()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_password;
        break;
      }

      // required string password = 3;
      case 3: {
        if (tag == 26) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_displayName;
        break;
      }

      // required string displayName = 4;
      case 4: {
        if (tag == 34) {
         parse_displayName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_displayname()));
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
  // @@protoc_insertion_point(parse_success:MessageRequestRegistration)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageRequestRegistration)
  return false;
#undef DO_
}

void MessageRequestRegistration::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageRequestRegistration)
  // required .eAuthType authType = 1 [default = atNone];
  if (has_authtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->authtype(), output);
  }

  // required string login = 2;
  if (has_login()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->login(), output);
  }

  // required string password = 3;
  if (has_password()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->password(), output);
  }

  // required string displayName = 4;
  if (has_displayname()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->displayname(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageRequestRegistration)
}

int MessageRequestRegistration::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageRequestRegistration)
  int total_size = 0;

  if (has_authtype()) {
    // required .eAuthType authType = 1 [default = atNone];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->authtype());
  }

  if (has_login()) {
    // required string login = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->login());
  }

  if (has_password()) {
    // required string password = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->password());
  }

  if (has_displayname()) {
    // required string displayName = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->displayname());
  }

  return total_size;
}
int MessageRequestRegistration::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageRequestRegistration)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required .eAuthType authType = 1 [default = atNone];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->authtype());

    // required string login = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->login());

    // required string password = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->password());

    // required string displayName = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->displayname());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageRequestRegistration::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageRequestRegistration*>(&from));
}

void MessageRequestRegistration::MergeFrom(const MessageRequestRegistration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageRequestRegistration)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_authtype()) {
      set_authtype(from.authtype());
    }
    if (from.has_login()) {
      set_has_login();
      login_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.login_);
    }
    if (from.has_password()) {
      set_has_password();
      password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
    }
    if (from.has_displayname()) {
      set_has_displayname();
      displayname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.displayname_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageRequestRegistration::CopyFrom(const MessageRequestRegistration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageRequestRegistration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageRequestRegistration::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void MessageRequestRegistration::Swap(MessageRequestRegistration* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageRequestRegistration::InternalSwap(MessageRequestRegistration* other) {
  std::swap(authtype_, other->authtype_);
  login_.Swap(&other->login_);
  password_.Swap(&other->password_);
  displayname_.Swap(&other->displayname_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageRequestRegistration::GetTypeName() const {
  return "MessageRequestRegistration";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestRegistration

// required .eAuthType authType = 1 [default = atNone];
bool MessageRequestRegistration::has_authtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageRequestRegistration::set_has_authtype() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageRequestRegistration::clear_has_authtype() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageRequestRegistration::clear_authtype() {
  authtype_ = 0;
  clear_has_authtype();
}
 ::eAuthType MessageRequestRegistration::authtype() const {
  // @@protoc_insertion_point(field_get:MessageRequestRegistration.authType)
  return static_cast< ::eAuthType >(authtype_);
}
 void MessageRequestRegistration::set_authtype(::eAuthType value) {
  assert(::eAuthType_IsValid(value));
  set_has_authtype();
  authtype_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestRegistration.authType)
}

// required string login = 2;
bool MessageRequestRegistration::has_login() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageRequestRegistration::set_has_login() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageRequestRegistration::clear_has_login() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageRequestRegistration::clear_login() {
  login_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_login();
}
 const ::std::string& MessageRequestRegistration::login() const {
  // @@protoc_insertion_point(field_get:MessageRequestRegistration.login)
  return login_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_login(const ::std::string& value) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestRegistration.login)
}
 void MessageRequestRegistration::set_login(const char* value) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestRegistration.login)
}
 void MessageRequestRegistration::set_login(const char* value, size_t size) {
  set_has_login();
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestRegistration.login)
}
 ::std::string* MessageRequestRegistration::mutable_login() {
  set_has_login();
  // @@protoc_insertion_point(field_mutable:MessageRequestRegistration.login)
  return login_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MessageRequestRegistration::release_login() {
  // @@protoc_insertion_point(field_release:MessageRequestRegistration.login)
  clear_has_login();
  return login_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_allocated_login(::std::string* login) {
  if (login != NULL) {
    set_has_login();
  } else {
    clear_has_login();
  }
  login_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), login);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestRegistration.login)
}

// required string password = 3;
bool MessageRequestRegistration::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageRequestRegistration::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageRequestRegistration::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageRequestRegistration::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
 const ::std::string& MessageRequestRegistration::password() const {
  // @@protoc_insertion_point(field_get:MessageRequestRegistration.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestRegistration.password)
}
 void MessageRequestRegistration::set_password(const char* value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestRegistration.password)
}
 void MessageRequestRegistration::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestRegistration.password)
}
 ::std::string* MessageRequestRegistration::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:MessageRequestRegistration.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MessageRequestRegistration::release_password() {
  // @@protoc_insertion_point(field_release:MessageRequestRegistration.password)
  clear_has_password();
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestRegistration.password)
}

// required string displayName = 4;
bool MessageRequestRegistration::has_displayname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MessageRequestRegistration::set_has_displayname() {
  _has_bits_[0] |= 0x00000008u;
}
void MessageRequestRegistration::clear_has_displayname() {
  _has_bits_[0] &= ~0x00000008u;
}
void MessageRequestRegistration::clear_displayname() {
  displayname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_displayname();
}
 const ::std::string& MessageRequestRegistration::displayname() const {
  // @@protoc_insertion_point(field_get:MessageRequestRegistration.displayName)
  return displayname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_displayname(const ::std::string& value) {
  set_has_displayname();
  displayname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageRequestRegistration.displayName)
}
 void MessageRequestRegistration::set_displayname(const char* value) {
  set_has_displayname();
  displayname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequestRegistration.displayName)
}
 void MessageRequestRegistration::set_displayname(const char* value, size_t size) {
  set_has_displayname();
  displayname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequestRegistration.displayName)
}
 ::std::string* MessageRequestRegistration::mutable_displayname() {
  set_has_displayname();
  // @@protoc_insertion_point(field_mutable:MessageRequestRegistration.displayName)
  return displayname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MessageRequestRegistration::release_displayname() {
  // @@protoc_insertion_point(field_release:MessageRequestRegistration.displayName)
  clear_has_displayname();
  return displayname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MessageRequestRegistration::set_allocated_displayname(::std::string* displayname) {
  if (displayname != NULL) {
    set_has_displayname();
  } else {
    clear_has_displayname();
  }
  displayname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), displayname);
  // @@protoc_insertion_point(field_set_allocated:MessageRequestRegistration.displayName)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
