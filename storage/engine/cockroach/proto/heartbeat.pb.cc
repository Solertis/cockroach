// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/proto/heartbeat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cockroach/proto/heartbeat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* RemoteOffset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RemoteOffset_reflection_ = NULL;
const ::google::protobuf::Descriptor* PingRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PingRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* PingResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PingResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cockroach_2fproto_2fheartbeat_2eproto() {
  protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cockroach/proto/heartbeat.proto");
  GOOGLE_CHECK(file != NULL);
  RemoteOffset_descriptor_ = file->message_type(0);
  static const int RemoteOffset_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RemoteOffset, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RemoteOffset, uncertainty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RemoteOffset, measured_at_),
  };
  RemoteOffset_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RemoteOffset_descriptor_,
      RemoteOffset::default_instance_,
      RemoteOffset_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RemoteOffset, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RemoteOffset, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RemoteOffset));
  PingRequest_descriptor_ = file->message_type(1);
  static const int PingRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, ping_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, addr_),
  };
  PingRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PingRequest_descriptor_,
      PingRequest::default_instance_,
      PingRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PingRequest));
  PingResponse_descriptor_ = file->message_type(2);
  static const int PingResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingResponse, pong_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingResponse, server_time_),
  };
  PingResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PingResponse_descriptor_,
      PingResponse::default_instance_,
      PingResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PingResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cockroach_2fproto_2fheartbeat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RemoteOffset_descriptor_, &RemoteOffset::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PingRequest_descriptor_, &PingRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PingResponse_descriptor_, &PingResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cockroach_2fproto_2fheartbeat_2eproto() {
  delete RemoteOffset::default_instance_;
  delete RemoteOffset_reflection_;
  delete PingRequest::default_instance_;
  delete PingRequest_reflection_;
  delete PingResponse::default_instance_;
  delete PingResponse_reflection_;
}

void protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gogoproto::protobuf_AddDesc_gogoproto_2fgogo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037cockroach/proto/heartbeat.proto\022\017cockr"
    "oach.proto\032\024gogoproto/gogo.proto\"`\n\014Remo"
    "teOffset\022\024\n\006offset\030\001 \001(\003B\004\310\336\037\000\022\031\n\013uncert"
    "ainty\030\002 \001(\003B\004\310\336\037\000\022\031\n\013measured_at\030\003 \001(\003B\004"
    "\310\336\037\000:\004\230\240\037\000\"j\n\013PingRequest\022\022\n\004ping\030\001 \001(\tB"
    "\004\310\336\037\000\0223\n\006offset\030\002 \001(\0132\035.cockroach.proto."
    "RemoteOffsetB\004\310\336\037\000\022\022\n\004addr\030\003 \001(\tB\004\310\336\037\000\"="
    "\n\014PingResponse\022\022\n\004pong\030\001 \001(\tB\004\310\336\037\000\022\031\n\013se"
    "rver_time\030\002 \001(\003B\004\310\336\037\000B\007Z\005proto", 350);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cockroach/proto/heartbeat.proto", &protobuf_RegisterTypes);
  RemoteOffset::default_instance_ = new RemoteOffset();
  PingRequest::default_instance_ = new PingRequest();
  PingResponse::default_instance_ = new PingResponse();
  RemoteOffset::default_instance_->InitAsDefaultInstance();
  PingRequest::default_instance_->InitAsDefaultInstance();
  PingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cockroach_2fproto_2fheartbeat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cockroach_2fproto_2fheartbeat_2eproto {
  StaticDescriptorInitializer_cockroach_2fproto_2fheartbeat_2eproto() {
    protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto();
  }
} static_descriptor_initializer_cockroach_2fproto_2fheartbeat_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RemoteOffset::kOffsetFieldNumber;
const int RemoteOffset::kUncertaintyFieldNumber;
const int RemoteOffset::kMeasuredAtFieldNumber;
#endif  // !_MSC_VER

RemoteOffset::RemoteOffset()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.proto.RemoteOffset)
}

void RemoteOffset::InitAsDefaultInstance() {
}

RemoteOffset::RemoteOffset(const RemoteOffset& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.proto.RemoteOffset)
}

void RemoteOffset::SharedCtor() {
  _cached_size_ = 0;
  offset_ = GOOGLE_LONGLONG(0);
  uncertainty_ = GOOGLE_LONGLONG(0);
  measured_at_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RemoteOffset::~RemoteOffset() {
  // @@protoc_insertion_point(destructor:cockroach.proto.RemoteOffset)
  SharedDtor();
}

void RemoteOffset::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RemoteOffset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RemoteOffset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RemoteOffset_descriptor_;
}

const RemoteOffset& RemoteOffset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto();
  return *default_instance_;
}

RemoteOffset* RemoteOffset::default_instance_ = NULL;

RemoteOffset* RemoteOffset::New() const {
  return new RemoteOffset;
}

void RemoteOffset::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RemoteOffset*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(offset_, measured_at_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RemoteOffset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.proto.RemoteOffset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 offset = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_uncertainty;
        break;
      }

      // optional int64 uncertainty = 2;
      case 2: {
        if (tag == 16) {
         parse_uncertainty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &uncertainty_)));
          set_has_uncertainty();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_measured_at;
        break;
      }

      // optional int64 measured_at = 3;
      case 3: {
        if (tag == 24) {
         parse_measured_at:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &measured_at_)));
          set_has_measured_at();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.proto.RemoteOffset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.proto.RemoteOffset)
  return false;
#undef DO_
}

void RemoteOffset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.proto.RemoteOffset)
  // optional int64 offset = 1;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->offset(), output);
  }

  // optional int64 uncertainty = 2;
  if (has_uncertainty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->uncertainty(), output);
  }

  // optional int64 measured_at = 3;
  if (has_measured_at()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->measured_at(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cockroach.proto.RemoteOffset)
}

::google::protobuf::uint8* RemoteOffset::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cockroach.proto.RemoteOffset)
  // optional int64 offset = 1;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->offset(), target);
  }

  // optional int64 uncertainty = 2;
  if (has_uncertainty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->uncertainty(), target);
  }

  // optional int64 measured_at = 3;
  if (has_measured_at()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->measured_at(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cockroach.proto.RemoteOffset)
  return target;
}

int RemoteOffset::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 offset = 1;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->offset());
    }

    // optional int64 uncertainty = 2;
    if (has_uncertainty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->uncertainty());
    }

    // optional int64 measured_at = 3;
    if (has_measured_at()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->measured_at());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RemoteOffset::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RemoteOffset* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RemoteOffset*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RemoteOffset::MergeFrom(const RemoteOffset& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_uncertainty()) {
      set_uncertainty(from.uncertainty());
    }
    if (from.has_measured_at()) {
      set_measured_at(from.measured_at());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RemoteOffset::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RemoteOffset::CopyFrom(const RemoteOffset& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RemoteOffset::IsInitialized() const {

  return true;
}

void RemoteOffset::Swap(RemoteOffset* other) {
  if (other != this) {
    std::swap(offset_, other->offset_);
    std::swap(uncertainty_, other->uncertainty_);
    std::swap(measured_at_, other->measured_at_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RemoteOffset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RemoteOffset_descriptor_;
  metadata.reflection = RemoteOffset_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PingRequest::kPingFieldNumber;
const int PingRequest::kOffsetFieldNumber;
const int PingRequest::kAddrFieldNumber;
#endif  // !_MSC_VER

PingRequest::PingRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.proto.PingRequest)
}

void PingRequest::InitAsDefaultInstance() {
  offset_ = const_cast< ::cockroach::proto::RemoteOffset*>(&::cockroach::proto::RemoteOffset::default_instance());
}

PingRequest::PingRequest(const PingRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.proto.PingRequest)
}

void PingRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ping_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = NULL;
  addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PingRequest::~PingRequest() {
  // @@protoc_insertion_point(destructor:cockroach.proto.PingRequest)
  SharedDtor();
}

void PingRequest::SharedDtor() {
  if (ping_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ping_;
  }
  if (addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete addr_;
  }
  if (this != default_instance_) {
    delete offset_;
  }
}

void PingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PingRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingRequest_descriptor_;
}

const PingRequest& PingRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto();
  return *default_instance_;
}

PingRequest* PingRequest::default_instance_ = NULL;

PingRequest* PingRequest::New() const {
  return new PingRequest;
}

void PingRequest::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_ping()) {
      if (ping_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        ping_->clear();
      }
    }
    if (has_offset()) {
      if (offset_ != NULL) offset_->::cockroach::proto::RemoteOffset::Clear();
    }
    if (has_addr()) {
      if (addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        addr_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PingRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.proto.PingRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ping = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ping()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ping().data(), this->ping().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ping");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_offset;
        break;
      }

      // optional .cockroach.proto.RemoteOffset offset = 2;
      case 2: {
        if (tag == 18) {
         parse_offset:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_offset()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_addr;
        break;
      }

      // optional string addr = 3;
      case 3: {
        if (tag == 26) {
         parse_addr:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_addr()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->addr().data(), this->addr().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "addr");
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.proto.PingRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.proto.PingRequest)
  return false;
#undef DO_
}

void PingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.proto.PingRequest)
  // optional string ping = 1;
  if (has_ping()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ping().data(), this->ping().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ping");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ping(), output);
  }

  // optional .cockroach.proto.RemoteOffset offset = 2;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->offset(), output);
  }

  // optional string addr = 3;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->addr().data(), this->addr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "addr");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->addr(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cockroach.proto.PingRequest)
}

::google::protobuf::uint8* PingRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cockroach.proto.PingRequest)
  // optional string ping = 1;
  if (has_ping()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ping().data(), this->ping().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ping");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ping(), target);
  }

  // optional .cockroach.proto.RemoteOffset offset = 2;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->offset(), target);
  }

  // optional string addr = 3;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->addr().data(), this->addr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "addr");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->addr(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cockroach.proto.PingRequest)
  return target;
}

int PingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string ping = 1;
    if (has_ping()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ping());
    }

    // optional .cockroach.proto.RemoteOffset offset = 2;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->offset());
    }

    // optional string addr = 3;
    if (has_addr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->addr());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PingRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PingRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PingRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PingRequest::MergeFrom(const PingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ping()) {
      set_ping(from.ping());
    }
    if (from.has_offset()) {
      mutable_offset()->::cockroach::proto::RemoteOffset::MergeFrom(from.offset());
    }
    if (from.has_addr()) {
      set_addr(from.addr());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PingRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingRequest::CopyFrom(const PingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingRequest::IsInitialized() const {

  return true;
}

void PingRequest::Swap(PingRequest* other) {
  if (other != this) {
    std::swap(ping_, other->ping_);
    std::swap(offset_, other->offset_);
    std::swap(addr_, other->addr_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PingRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PingRequest_descriptor_;
  metadata.reflection = PingRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PingResponse::kPongFieldNumber;
const int PingResponse::kServerTimeFieldNumber;
#endif  // !_MSC_VER

PingResponse::PingResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.proto.PingResponse)
}

void PingResponse::InitAsDefaultInstance() {
}

PingResponse::PingResponse(const PingResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.proto.PingResponse)
}

void PingResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  pong_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  server_time_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PingResponse::~PingResponse() {
  // @@protoc_insertion_point(destructor:cockroach.proto.PingResponse)
  SharedDtor();
}

void PingResponse::SharedDtor() {
  if (pong_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete pong_;
  }
  if (this != default_instance_) {
  }
}

void PingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PingResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingResponse_descriptor_;
}

const PingResponse& PingResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2fproto_2fheartbeat_2eproto();
  return *default_instance_;
}

PingResponse* PingResponse::default_instance_ = NULL;

PingResponse* PingResponse::New() const {
  return new PingResponse;
}

void PingResponse::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_pong()) {
      if (pong_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        pong_->clear();
      }
    }
    server_time_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PingResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.proto.PingResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string pong = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pong()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->pong().data(), this->pong().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pong");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_server_time;
        break;
      }

      // optional int64 server_time = 2;
      case 2: {
        if (tag == 16) {
         parse_server_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_time_)));
          set_has_server_time();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.proto.PingResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.proto.PingResponse)
  return false;
#undef DO_
}

void PingResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.proto.PingResponse)
  // optional string pong = 1;
  if (has_pong()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->pong().data(), this->pong().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pong");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->pong(), output);
  }

  // optional int64 server_time = 2;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->server_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cockroach.proto.PingResponse)
}

::google::protobuf::uint8* PingResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cockroach.proto.PingResponse)
  // optional string pong = 1;
  if (has_pong()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->pong().data(), this->pong().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pong");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->pong(), target);
  }

  // optional int64 server_time = 2;
  if (has_server_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->server_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cockroach.proto.PingResponse)
  return target;
}

int PingResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string pong = 1;
    if (has_pong()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->pong());
    }

    // optional int64 server_time = 2;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->server_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PingResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PingResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PingResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PingResponse::MergeFrom(const PingResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pong()) {
      set_pong(from.pong());
    }
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PingResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingResponse::CopyFrom(const PingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingResponse::IsInitialized() const {

  return true;
}

void PingResponse::Swap(PingResponse* other) {
  if (other != this) {
    std::swap(pong_, other->pong_);
    std::swap(server_time_, other->server_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PingResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PingResponse_descriptor_;
  metadata.reflection = PingResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
