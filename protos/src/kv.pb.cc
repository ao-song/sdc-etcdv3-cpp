// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kv.proto

#include "kv.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace mvccpb {
class KeyValueDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<KeyValue>
      _instance;
} _KeyValue_default_instance_;
class EventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Event>
      _instance;
} _Event_default_instance_;
}  // namespace mvccpb
namespace protobuf_kv_2eproto {
void InitDefaultsKeyValueImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::mvccpb::_KeyValue_default_instance_;
    new (ptr) ::mvccpb::KeyValue();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvccpb::KeyValue::InitAsDefaultInstance();
}

void InitDefaultsKeyValue() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsKeyValueImpl);
}

void InitDefaultsEventImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_kv_2eproto::InitDefaultsKeyValue();
  {
    void* ptr = &::mvccpb::_Event_default_instance_;
    new (ptr) ::mvccpb::Event();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvccpb::Event::InitAsDefaultInstance();
}

void InitDefaultsEvent() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsEventImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, create_revision_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, mod_revision_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::KeyValue, lease_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::Event, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::Event, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::Event, kv_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvccpb::Event, prev_kv_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mvccpb::KeyValue)},
  { 11, -1, sizeof(::mvccpb::Event)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvccpb::_KeyValue_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvccpb::_Event_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "kv.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\010kv.proto\022\006mvccpb\"u\n\010KeyValue\022\013\n\003key\030\001 "
      "\001(\014\022\027\n\017create_revision\030\002 \001(\003\022\024\n\014mod_revi"
      "sion\030\003 \001(\003\022\017\n\007version\030\004 \001(\003\022\r\n\005value\030\005 \001"
      "(\014\022\r\n\005lease\030\006 \001(\003\"\221\001\n\005Event\022%\n\004type\030\001 \001("
      "\0162\027.mvccpb.Event.EventType\022\034\n\002kv\030\002 \001(\0132\020"
      ".mvccpb.KeyValue\022!\n\007prev_kv\030\003 \001(\0132\020.mvcc"
      "pb.KeyValue\" \n\tEventType\022\007\n\003PUT\020\000\022\n\n\006DEL"
      "ETE\020\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 293);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "kv.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_kv_2eproto
namespace mvccpb {
const ::google::protobuf::EnumDescriptor* Event_EventType_descriptor() {
  protobuf_kv_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_kv_2eproto::file_level_enum_descriptors[0];
}
bool Event_EventType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Event_EventType Event::PUT;
const Event_EventType Event::DELETE;
const Event_EventType Event::EventType_MIN;
const Event_EventType Event::EventType_MAX;
const int Event::EventType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void KeyValue::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeyValue::kKeyFieldNumber;
const int KeyValue::kCreateRevisionFieldNumber;
const int KeyValue::kModRevisionFieldNumber;
const int KeyValue::kVersionFieldNumber;
const int KeyValue::kValueFieldNumber;
const int KeyValue::kLeaseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeyValue::KeyValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_kv_2eproto::InitDefaultsKeyValue();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvccpb.KeyValue)
}
KeyValue::KeyValue(const KeyValue& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  ::memcpy(&create_revision_, &from.create_revision_,
    static_cast<size_t>(reinterpret_cast<char*>(&lease_) -
    reinterpret_cast<char*>(&create_revision_)) + sizeof(lease_));
  // @@protoc_insertion_point(copy_constructor:mvccpb.KeyValue)
}

void KeyValue::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&create_revision_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lease_) -
      reinterpret_cast<char*>(&create_revision_)) + sizeof(lease_));
  _cached_size_ = 0;
}

KeyValue::~KeyValue() {
  // @@protoc_insertion_point(destructor:mvccpb.KeyValue)
  SharedDtor();
}

void KeyValue::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void KeyValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KeyValue::descriptor() {
  ::protobuf_kv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_kv_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const KeyValue& KeyValue::default_instance() {
  ::protobuf_kv_2eproto::InitDefaultsKeyValue();
  return *internal_default_instance();
}

KeyValue* KeyValue::New(::google::protobuf::Arena* arena) const {
  KeyValue* n = new KeyValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KeyValue::Clear() {
// @@protoc_insertion_point(message_clear_start:mvccpb.KeyValue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&create_revision_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lease_) -
      reinterpret_cast<char*>(&create_revision_)) + sizeof(lease_));
  _internal_metadata_.Clear();
}

bool KeyValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvccpb.KeyValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 create_revision = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &create_revision_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 mod_revision = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &mod_revision_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 version = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes value = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 lease = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &lease_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mvccpb.KeyValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvccpb.KeyValue)
  return false;
#undef DO_
}

void KeyValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvccpb.KeyValue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->key(), output);
  }

  // int64 create_revision = 2;
  if (this->create_revision() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->create_revision(), output);
  }

  // int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->mod_revision(), output);
  }

  // int64 version = 4;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->version(), output);
  }

  // bytes value = 5;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->value(), output);
  }

  // int64 lease = 6;
  if (this->lease() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->lease(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mvccpb.KeyValue)
}

::google::protobuf::uint8* KeyValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvccpb.KeyValue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->key(), target);
  }

  // int64 create_revision = 2;
  if (this->create_revision() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->create_revision(), target);
  }

  // int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->mod_revision(), target);
  }

  // int64 version = 4;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->version(), target);
  }

  // bytes value = 5;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->value(), target);
  }

  // int64 lease = 6;
  if (this->lease() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->lease(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvccpb.KeyValue)
  return target;
}

size_t KeyValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvccpb.KeyValue)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->key());
  }

  // bytes value = 5;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  // int64 create_revision = 2;
  if (this->create_revision() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->create_revision());
  }

  // int64 mod_revision = 3;
  if (this->mod_revision() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->mod_revision());
  }

  // int64 version = 4;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version());
  }

  // int64 lease = 6;
  if (this->lease() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->lease());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KeyValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvccpb.KeyValue)
  GOOGLE_DCHECK_NE(&from, this);
  const KeyValue* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const KeyValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvccpb.KeyValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvccpb.KeyValue)
    MergeFrom(*source);
  }
}

void KeyValue::MergeFrom(const KeyValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvccpb.KeyValue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.create_revision() != 0) {
    set_create_revision(from.create_revision());
  }
  if (from.mod_revision() != 0) {
    set_mod_revision(from.mod_revision());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
  if (from.lease() != 0) {
    set_lease(from.lease());
  }
}

void KeyValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvccpb.KeyValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyValue::CopyFrom(const KeyValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvccpb.KeyValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyValue::IsInitialized() const {
  return true;
}

void KeyValue::Swap(KeyValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeyValue::InternalSwap(KeyValue* other) {
  using std::swap;
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  swap(create_revision_, other->create_revision_);
  swap(mod_revision_, other->mod_revision_);
  swap(version_, other->version_);
  swap(lease_, other->lease_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KeyValue::GetMetadata() const {
  protobuf_kv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_kv_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Event::InitAsDefaultInstance() {
  ::mvccpb::_Event_default_instance_._instance.get_mutable()->kv_ = const_cast< ::mvccpb::KeyValue*>(
      ::mvccpb::KeyValue::internal_default_instance());
  ::mvccpb::_Event_default_instance_._instance.get_mutable()->prev_kv_ = const_cast< ::mvccpb::KeyValue*>(
      ::mvccpb::KeyValue::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Event::kTypeFieldNumber;
const int Event::kKvFieldNumber;
const int Event::kPrevKvFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Event::Event()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_kv_2eproto::InitDefaultsEvent();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvccpb.Event)
}
Event::Event(const Event& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_kv()) {
    kv_ = new ::mvccpb::KeyValue(*from.kv_);
  } else {
    kv_ = NULL;
  }
  if (from.has_prev_kv()) {
    prev_kv_ = new ::mvccpb::KeyValue(*from.prev_kv_);
  } else {
    prev_kv_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:mvccpb.Event)
}

void Event::SharedCtor() {
  ::memset(&kv_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&kv_)) + sizeof(type_));
  _cached_size_ = 0;
}

Event::~Event() {
  // @@protoc_insertion_point(destructor:mvccpb.Event)
  SharedDtor();
}

void Event::SharedDtor() {
  if (this != internal_default_instance()) delete kv_;
  if (this != internal_default_instance()) delete prev_kv_;
}

void Event::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event::descriptor() {
  ::protobuf_kv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_kv_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Event& Event::default_instance() {
  ::protobuf_kv_2eproto::InitDefaultsEvent();
  return *internal_default_instance();
}

Event* Event::New(::google::protobuf::Arena* arena) const {
  Event* n = new Event;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Event::Clear() {
// @@protoc_insertion_point(message_clear_start:mvccpb.Event)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && kv_ != NULL) {
    delete kv_;
  }
  kv_ = NULL;
  if (GetArenaNoVirtual() == NULL && prev_kv_ != NULL) {
    delete prev_kv_;
  }
  prev_kv_ = NULL;
  type_ = 0;
  _internal_metadata_.Clear();
}

bool Event::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvccpb.Event)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .mvccpb.Event.EventType type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::mvccpb::Event_EventType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .mvccpb.KeyValue kv = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_kv()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .mvccpb.KeyValue prev_kv = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_prev_kv()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mvccpb.Event)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvccpb.Event)
  return false;
#undef DO_
}

void Event::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvccpb.Event)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->kv_, output);
  }

  // .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->prev_kv_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mvccpb.Event)
}

::google::protobuf::uint8* Event::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvccpb.Event)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *this->kv_, deterministic, target);
  }

  // .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, *this->prev_kv_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvccpb.Event)
  return target;
}

size_t Event::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvccpb.Event)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .mvccpb.KeyValue kv = 2;
  if (this->has_kv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->kv_);
  }

  // .mvccpb.KeyValue prev_kv = 3;
  if (this->has_prev_kv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->prev_kv_);
  }

  // .mvccpb.Event.EventType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvccpb.Event)
  GOOGLE_DCHECK_NE(&from, this);
  const Event* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Event>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvccpb.Event)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvccpb.Event)
    MergeFrom(*source);
  }
}

void Event::MergeFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvccpb.Event)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_kv()) {
    mutable_kv()->::mvccpb::KeyValue::MergeFrom(from.kv());
  }
  if (from.has_prev_kv()) {
    mutable_prev_kv()->::mvccpb::KeyValue::MergeFrom(from.prev_kv());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Event::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvccpb.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event::CopyFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvccpb.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event::IsInitialized() const {
  return true;
}

void Event::Swap(Event* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Event::InternalSwap(Event* other) {
  using std::swap;
  swap(kv_, other->kv_);
  swap(prev_kv_, other->prev_kv_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event::GetMetadata() const {
  protobuf_kv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_kv_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvccpb

// @@protoc_insertion_point(global_scope)