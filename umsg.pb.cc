// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: umsg.proto

#include "umsg.pb.h"

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
// @@protoc_insertion_point(includes)
namespace vcf {
class VCF_msg_ExtendedDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VCF_msg_Extended>
      _instance;
} _VCF_msg_Extended_default_instance_;
class VCF_msgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VCF_msg>
      _instance;
} _VCF_msg_default_instance_;
}  // namespace vcf
namespace protobuf_umsg_2eproto {
void InitDefaultsVCF_msg_ExtendedImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  {
    void* ptr = &::vcf::_VCF_msg_Extended_default_instance_;
    new (ptr) ::vcf::VCF_msg_Extended();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::vcf::VCF_msg_Extended::InitAsDefaultInstance();
}

void InitDefaultsVCF_msg_Extended() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsVCF_msg_ExtendedImpl);
}

void InitDefaultsVCF_msgImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  protobuf_umsg_2eproto::InitDefaultsVCF_msg_Extended();
  {
    void* ptr = &::vcf::_VCF_msg_default_instance_;
    new (ptr) ::vcf::VCF_msg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::vcf::VCF_msg::InitAsDefaultInstance();
}

void InitDefaultsVCF_msg() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsVCF_msgImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg_Extended, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg_Extended, _type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg_Extended, _min_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg_Extended, _max_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _seqno_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _response_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _owner_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _c_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _p_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, _value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::vcf::VCF_msg, ext_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::vcf::VCF_msg_Extended)},
  { 8, -1, sizeof(::vcf::VCF_msg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::vcf::_VCF_msg_Extended_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::vcf::_VCF_msg_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "umsg.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
      "\n\numsg.proto\022\003vcf\"\345\001\n\007VCF_msg\022\016\n\006_seqNo\030"
      "\001 \001(\r\022\017\n\007_result\030\002 \001(\005\022\021\n\t_response\030\003 \001("
      "\t\022\016\n\006_owner\030\004 \001(\r\022\r\n\005_name\030\005 \001(\t\022\r\n\005_c_I"
      "D\030\006 \001(\r\022\r\n\005_p_ID\030\007 \001(\r\022\016\n\006_value\030\010 \001(\005\022\""
      "\n\003ext\030\t \003(\0132\025.vcf.VCF_msg.Extended\0325\n\010Ex"
      "tended\022\r\n\005_type\030\001 \001(\r\022\014\n\004_min\030\002 \001(\005\022\014\n\004_"
      "max\030\003 \001(\005B%\n\027com.rubicom.vcf.ichthusB\nUm"
      "sgProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 296);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "umsg.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_umsg_2eproto
namespace vcf {

// ===================================================================

void VCF_msg_Extended::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VCF_msg_Extended::kTypeFieldNumber;
const int VCF_msg_Extended::kMinFieldNumber;
const int VCF_msg_Extended::kMaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VCF_msg_Extended::VCF_msg_Extended()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_umsg_2eproto::InitDefaultsVCF_msg_Extended();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:vcf.VCF_msg.Extended)
}
VCF_msg_Extended::VCF_msg_Extended(const VCF_msg_Extended& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&_type_, &from._type_,
    static_cast<size_t>(reinterpret_cast<char*>(&_max_) -
    reinterpret_cast<char*>(&_type_)) + sizeof(_max_));
  // @@protoc_insertion_point(copy_constructor:vcf.VCF_msg.Extended)
}

void VCF_msg_Extended::SharedCtor() {
  ::memset(&_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_max_) -
      reinterpret_cast<char*>(&_type_)) + sizeof(_max_));
  _cached_size_ = 0;
}

VCF_msg_Extended::~VCF_msg_Extended() {
  // @@protoc_insertion_point(destructor:vcf.VCF_msg.Extended)
  SharedDtor();
}

void VCF_msg_Extended::SharedDtor() {
}

void VCF_msg_Extended::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VCF_msg_Extended::descriptor() {
  ::protobuf_umsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_umsg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VCF_msg_Extended& VCF_msg_Extended::default_instance() {
  ::protobuf_umsg_2eproto::InitDefaultsVCF_msg_Extended();
  return *internal_default_instance();
}

VCF_msg_Extended* VCF_msg_Extended::New(::google::protobuf::Arena* arena) const {
  VCF_msg_Extended* n = new VCF_msg_Extended;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VCF_msg_Extended::Clear() {
// @@protoc_insertion_point(message_clear_start:vcf.VCF_msg.Extended)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_max_) -
      reinterpret_cast<char*>(&_type_)) + sizeof(_max_));
  _internal_metadata_.Clear();
}

bool VCF_msg_Extended::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:vcf.VCF_msg.Extended)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 _type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 _min = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &_min_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 _max = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &_max_)));
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
  // @@protoc_insertion_point(parse_success:vcf.VCF_msg.Extended)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:vcf.VCF_msg.Extended)
  return false;
#undef DO_
}

void VCF_msg_Extended::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:vcf.VCF_msg.Extended)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 _type = 1;
  if (this->_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->_type(), output);
  }

  // int32 _min = 2;
  if (this->_min() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->_min(), output);
  }

  // int32 _max = 3;
  if (this->_max() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->_max(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:vcf.VCF_msg.Extended)
}

::google::protobuf::uint8* VCF_msg_Extended::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:vcf.VCF_msg.Extended)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 _type = 1;
  if (this->_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->_type(), target);
  }

  // int32 _min = 2;
  if (this->_min() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->_min(), target);
  }

  // int32 _max = 3;
  if (this->_max() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->_max(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vcf.VCF_msg.Extended)
  return target;
}

size_t VCF_msg_Extended::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vcf.VCF_msg.Extended)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 _type = 1;
  if (this->_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_type());
  }

  // int32 _min = 2;
  if (this->_min() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->_min());
  }

  // int32 _max = 3;
  if (this->_max() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->_max());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VCF_msg_Extended::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:vcf.VCF_msg.Extended)
  GOOGLE_DCHECK_NE(&from, this);
  const VCF_msg_Extended* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VCF_msg_Extended>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:vcf.VCF_msg.Extended)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:vcf.VCF_msg.Extended)
    MergeFrom(*source);
  }
}

void VCF_msg_Extended::MergeFrom(const VCF_msg_Extended& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vcf.VCF_msg.Extended)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._type() != 0) {
    set__type(from._type());
  }
  if (from._min() != 0) {
    set__min(from._min());
  }
  if (from._max() != 0) {
    set__max(from._max());
  }
}

void VCF_msg_Extended::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:vcf.VCF_msg.Extended)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VCF_msg_Extended::CopyFrom(const VCF_msg_Extended& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vcf.VCF_msg.Extended)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VCF_msg_Extended::IsInitialized() const {
  return true;
}

void VCF_msg_Extended::Swap(VCF_msg_Extended* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VCF_msg_Extended::InternalSwap(VCF_msg_Extended* other) {
  using std::swap;
  swap(_type_, other->_type_);
  swap(_min_, other->_min_);
  swap(_max_, other->_max_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VCF_msg_Extended::GetMetadata() const {
  protobuf_umsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_umsg_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void VCF_msg::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VCF_msg::kSeqNoFieldNumber;
const int VCF_msg::kResultFieldNumber;
const int VCF_msg::kResponseFieldNumber;
const int VCF_msg::kOwnerFieldNumber;
const int VCF_msg::kNameFieldNumber;
const int VCF_msg::kCIDFieldNumber;
const int VCF_msg::kPIDFieldNumber;
const int VCF_msg::kValueFieldNumber;
const int VCF_msg::kExtFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VCF_msg::VCF_msg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_umsg_2eproto::InitDefaultsVCF_msg();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:vcf.VCF_msg)
}
VCF_msg::VCF_msg(const VCF_msg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      ext_(from.ext_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from._response().size() > 0) {
    _response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._response_);
  }
  _name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from._name().size() > 0) {
    _name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._name_);
  }
  ::memcpy(&_seqno_, &from._seqno_,
    static_cast<size_t>(reinterpret_cast<char*>(&_value_) -
    reinterpret_cast<char*>(&_seqno_)) + sizeof(_value_));
  // @@protoc_insertion_point(copy_constructor:vcf.VCF_msg)
}

void VCF_msg::SharedCtor() {
  _response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&_seqno_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_value_) -
      reinterpret_cast<char*>(&_seqno_)) + sizeof(_value_));
  _cached_size_ = 0;
}

VCF_msg::~VCF_msg() {
  // @@protoc_insertion_point(destructor:vcf.VCF_msg)
  SharedDtor();
}

void VCF_msg::SharedDtor() {
  _response_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VCF_msg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VCF_msg::descriptor() {
  ::protobuf_umsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_umsg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VCF_msg& VCF_msg::default_instance() {
  ::protobuf_umsg_2eproto::InitDefaultsVCF_msg();
  return *internal_default_instance();
}

VCF_msg* VCF_msg::New(::google::protobuf::Arena* arena) const {
  VCF_msg* n = new VCF_msg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VCF_msg::Clear() {
// @@protoc_insertion_point(message_clear_start:vcf.VCF_msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ext_.Clear();
  _response_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&_seqno_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_value_) -
      reinterpret_cast<char*>(&_seqno_)) + sizeof(_value_));
  _internal_metadata_.Clear();
}

bool VCF_msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:vcf.VCF_msg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 _seqNo = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_seqno_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 _result = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &_result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string _response = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable__response()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->_response().data(), static_cast<int>(this->_response().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "vcf.VCF_msg._response"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 _owner = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_owner_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string _name = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable__name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->_name().data(), static_cast<int>(this->_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "vcf.VCF_msg._name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 _c_ID = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_c_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 _p_ID = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_p_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 _value = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .vcf.VCF_msg.Extended ext = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_ext()));
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
  // @@protoc_insertion_point(parse_success:vcf.VCF_msg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:vcf.VCF_msg)
  return false;
#undef DO_
}

void VCF_msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:vcf.VCF_msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 _seqNo = 1;
  if (this->_seqno() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->_seqno(), output);
  }

  // int32 _result = 2;
  if (this->_result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->_result(), output);
  }

  // string _response = 3;
  if (this->_response().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->_response().data(), static_cast<int>(this->_response().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "vcf.VCF_msg._response");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->_response(), output);
  }

  // uint32 _owner = 4;
  if (this->_owner() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->_owner(), output);
  }

  // string _name = 5;
  if (this->_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->_name().data(), static_cast<int>(this->_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "vcf.VCF_msg._name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->_name(), output);
  }

  // uint32 _c_ID = 6;
  if (this->_c_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->_c_id(), output);
  }

  // uint32 _p_ID = 7;
  if (this->_p_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->_p_id(), output);
  }

  // int32 _value = 8;
  if (this->_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->_value(), output);
  }

  // repeated .vcf.VCF_msg.Extended ext = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ext_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->ext(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:vcf.VCF_msg)
}

::google::protobuf::uint8* VCF_msg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:vcf.VCF_msg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 _seqNo = 1;
  if (this->_seqno() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->_seqno(), target);
  }

  // int32 _result = 2;
  if (this->_result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->_result(), target);
  }

  // string _response = 3;
  if (this->_response().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->_response().data(), static_cast<int>(this->_response().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "vcf.VCF_msg._response");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->_response(), target);
  }

  // uint32 _owner = 4;
  if (this->_owner() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->_owner(), target);
  }

  // string _name = 5;
  if (this->_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->_name().data(), static_cast<int>(this->_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "vcf.VCF_msg._name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->_name(), target);
  }

  // uint32 _c_ID = 6;
  if (this->_c_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->_c_id(), target);
  }

  // uint32 _p_ID = 7;
  if (this->_p_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->_p_id(), target);
  }

  // int32 _value = 8;
  if (this->_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->_value(), target);
  }

  // repeated .vcf.VCF_msg.Extended ext = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ext_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->ext(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vcf.VCF_msg)
  return target;
}

size_t VCF_msg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vcf.VCF_msg)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .vcf.VCF_msg.Extended ext = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->ext_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ext(static_cast<int>(i)));
    }
  }

  // string _response = 3;
  if (this->_response().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->_response());
  }

  // string _name = 5;
  if (this->_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->_name());
  }

  // uint32 _seqNo = 1;
  if (this->_seqno() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_seqno());
  }

  // int32 _result = 2;
  if (this->_result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->_result());
  }

  // uint32 _owner = 4;
  if (this->_owner() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_owner());
  }

  // uint32 _c_ID = 6;
  if (this->_c_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_c_id());
  }

  // uint32 _p_ID = 7;
  if (this->_p_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_p_id());
  }

  // int32 _value = 8;
  if (this->_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VCF_msg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:vcf.VCF_msg)
  GOOGLE_DCHECK_NE(&from, this);
  const VCF_msg* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VCF_msg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:vcf.VCF_msg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:vcf.VCF_msg)
    MergeFrom(*source);
  }
}

void VCF_msg::MergeFrom(const VCF_msg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vcf.VCF_msg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ext_.MergeFrom(from.ext_);
  if (from._response().size() > 0) {

    _response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._response_);
  }
  if (from._name().size() > 0) {

    _name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._name_);
  }
  if (from._seqno() != 0) {
    set__seqno(from._seqno());
  }
  if (from._result() != 0) {
    set__result(from._result());
  }
  if (from._owner() != 0) {
    set__owner(from._owner());
  }
  if (from._c_id() != 0) {
    set__c_id(from._c_id());
  }
  if (from._p_id() != 0) {
    set__p_id(from._p_id());
  }
  if (from._value() != 0) {
    set__value(from._value());
  }
}

void VCF_msg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:vcf.VCF_msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VCF_msg::CopyFrom(const VCF_msg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vcf.VCF_msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VCF_msg::IsInitialized() const {
  return true;
}

void VCF_msg::Swap(VCF_msg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VCF_msg::InternalSwap(VCF_msg* other) {
  using std::swap;
  ext_.InternalSwap(&other->ext_);
  _response_.Swap(&other->_response_);
  _name_.Swap(&other->_name_);
  swap(_seqno_, other->_seqno_);
  swap(_result_, other->_result_);
  swap(_owner_, other->_owner_);
  swap(_c_id_, other->_c_id_);
  swap(_p_id_, other->_p_id_);
  swap(_value_, other->_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VCF_msg::GetMetadata() const {
  protobuf_umsg_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_umsg_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace vcf

// @@protoc_insertion_point(global_scope)
