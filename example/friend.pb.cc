// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#include "friend.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_friend_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResultCode_friend_2eproto;
namespace fixbug {
class ResultCodeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResultCode> _instance;
} _ResultCode_default_instance_;
class GetFriendsRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetFriendsRequest> _instance;
} _GetFriendsRequest_default_instance_;
class GetFriendsResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetFriendsResponse> _instance;
} _GetFriendsResponse_default_instance_;
}  // namespace fixbug
static void InitDefaultsscc_info_GetFriendsRequest_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_GetFriendsRequest_default_instance_;
    new (ptr) ::fixbug::GetFriendsRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::GetFriendsRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetFriendsRequest_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetFriendsRequest_friend_2eproto}, {}};

static void InitDefaultsscc_info_GetFriendsResponse_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_GetFriendsResponse_default_instance_;
    new (ptr) ::fixbug::GetFriendsResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::GetFriendsResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GetFriendsResponse_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_GetFriendsResponse_friend_2eproto}, {
      &scc_info_ResultCode_friend_2eproto.base,}};

static void InitDefaultsscc_info_ResultCode_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_ResultCode_default_instance_;
    new (ptr) ::fixbug::ResultCode();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::ResultCode::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResultCode_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResultCode_friend_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_friend_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_friend_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_friend_2eproto[1];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_friend_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, errcode_),
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, errmsg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::GetFriendsRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::GetFriendsRequest, userid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::GetFriendsResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::GetFriendsResponse, result_),
  PROTOBUF_FIELD_OFFSET(::fixbug::GetFriendsResponse, friends_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::fixbug::ResultCode)},
  { 7, -1, sizeof(::fixbug::GetFriendsRequest)},
  { 13, -1, sizeof(::fixbug::GetFriendsResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_ResultCode_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_GetFriendsRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_GetFriendsResponse_default_instance_),
};

const char descriptor_table_protodef_friend_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014friend.proto\022\006fixbug\"-\n\nResultCode\022\017\n\007"
  "errcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\"#\n\021GetFrie"
  "ndsRequest\022\016\n\006userid\030\001 \001(\r\"I\n\022GetFriends"
  "Response\022\"\n\006result\030\001 \001(\0132\022.fixbug.Result"
  "Code\022\017\n\007friends\030\002 \003(\0142\\\n\021FriendsServiceR"
  "pc\022G\n\016GetFriendsList\022\031.fixbug.GetFriends"
  "Request\032\032.fixbug.GetFriendsResponseB\003\200\001\001"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_friend_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_friend_2eproto_sccs[3] = {
  &scc_info_GetFriendsRequest_friend_2eproto.base,
  &scc_info_GetFriendsResponse_friend_2eproto.base,
  &scc_info_ResultCode_friend_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_friend_2eproto_once;
static bool descriptor_table_friend_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friend_2eproto = {
  &descriptor_table_friend_2eproto_initialized, descriptor_table_protodef_friend_2eproto, "friend.proto", 288,
  &descriptor_table_friend_2eproto_once, descriptor_table_friend_2eproto_sccs, descriptor_table_friend_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_friend_2eproto::offsets,
  file_level_metadata_friend_2eproto, 3, file_level_enum_descriptors_friend_2eproto, file_level_service_descriptors_friend_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_friend_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_friend_2eproto), true);
namespace fixbug {

// ===================================================================

void ResultCode::InitAsDefaultInstance() {
}
class ResultCode::_Internal {
 public:
};

ResultCode::ResultCode()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_errmsg().empty()) {
    errmsg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  errcode_ = from.errcode_;
  // @@protoc_insertion_point(copy_constructor:fixbug.ResultCode)
}

void ResultCode::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResultCode_friend_2eproto.base);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:fixbug.ResultCode)
  SharedDtor();
}

void ResultCode::SharedDtor() {
  errmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResultCode& ResultCode::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResultCode_friend_2eproto.base);
  return *internal_default_instance();
}


void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errmsg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
  _internal_metadata_.Clear();
}

const char* ResultCode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 errcode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          errcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes errmsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_errmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResultCode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_errcode(), target);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_errmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.ResultCode)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_errmsg());
  }

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_errcode());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResultCode::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ResultCode* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResultCode>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.ResultCode)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.ResultCode)
    MergeFrom(*source);
  }
}

void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.errmsg().size() > 0) {

    errmsg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  if (from.errcode() != 0) {
    _internal_set_errcode(from._internal_errcode());
  }
}

void ResultCode::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::InternalSwap(ResultCode* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  errmsg_.Swap(&other->errmsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(errcode_, other->errcode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResultCode::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void GetFriendsRequest::InitAsDefaultInstance() {
}
class GetFriendsRequest::_Internal {
 public:
};

GetFriendsRequest::GetFriendsRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendsRequest)
}
GetFriendsRequest::GetFriendsRequest(const GetFriendsRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  userid_ = from.userid_;
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendsRequest)
}

void GetFriendsRequest::SharedCtor() {
  userid_ = 0u;
}

GetFriendsRequest::~GetFriendsRequest() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendsRequest)
  SharedDtor();
}

void GetFriendsRequest::SharedDtor() {
}

void GetFriendsRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetFriendsRequest& GetFriendsRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetFriendsRequest_friend_2eproto.base);
  return *internal_default_instance();
}


void GetFriendsRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendsRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  userid_ = 0u;
  _internal_metadata_.Clear();
}

const char* GetFriendsRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 userid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          userid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetFriendsRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendsRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 userid = 1;
  if (this->userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_userid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendsRequest)
  return target;
}

size_t GetFriendsRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendsRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 userid = 1;
  if (this->userid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_userid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetFriendsRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendsRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendsRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetFriendsRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendsRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendsRequest)
    MergeFrom(*source);
  }
}

void GetFriendsRequest::MergeFrom(const GetFriendsRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendsRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.userid() != 0) {
    _internal_set_userid(from._internal_userid());
  }
}

void GetFriendsRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendsRequest::CopyFrom(const GetFriendsRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendsRequest::IsInitialized() const {
  return true;
}

void GetFriendsRequest::InternalSwap(GetFriendsRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(userid_, other->userid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetFriendsRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void GetFriendsResponse::InitAsDefaultInstance() {
  ::fixbug::_GetFriendsResponse_default_instance_._instance.get_mutable()->result_ = const_cast< ::fixbug::ResultCode*>(
      ::fixbug::ResultCode::internal_default_instance());
}
class GetFriendsResponse::_Internal {
 public:
  static const ::fixbug::ResultCode& result(const GetFriendsResponse* msg);
};

const ::fixbug::ResultCode&
GetFriendsResponse::_Internal::result(const GetFriendsResponse* msg) {
  return *msg->result_;
}
GetFriendsResponse::GetFriendsResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendsResponse)
}
GetFriendsResponse::GetFriendsResponse(const GetFriendsResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      friends_(from.friends_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_result()) {
    result_ = new ::fixbug::ResultCode(*from.result_);
  } else {
    result_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendsResponse)
}

void GetFriendsResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetFriendsResponse_friend_2eproto.base);
  result_ = nullptr;
}

GetFriendsResponse::~GetFriendsResponse() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendsResponse)
  SharedDtor();
}

void GetFriendsResponse::SharedDtor() {
  if (this != internal_default_instance()) delete result_;
}

void GetFriendsResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetFriendsResponse& GetFriendsResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetFriendsResponse_friend_2eproto.base);
  return *internal_default_instance();
}


void GetFriendsResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendsResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  friends_.Clear();
  if (GetArenaNoVirtual() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
  _internal_metadata_.Clear();
}

const char* GetFriendsResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .fixbug.ResultCode result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bytes friends = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_friends();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetFriendsResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendsResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::result(this), target, stream);
  }

  // repeated bytes friends = 2;
  for (int i = 0, n = this->_internal_friends_size(); i < n; i++) {
    const auto& s = this->_internal_friends(i);
    target = stream->WriteBytes(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendsResponse)
  return target;
}

size_t GetFriendsResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendsResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes friends = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(friends_.size());
  for (int i = 0, n = friends_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      friends_.Get(i));
  }

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *result_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetFriendsResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendsResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendsResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetFriendsResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendsResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendsResponse)
    MergeFrom(*source);
  }
}

void GetFriendsResponse::MergeFrom(const GetFriendsResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendsResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  friends_.MergeFrom(from.friends_);
  if (from.has_result()) {
    _internal_mutable_result()->::fixbug::ResultCode::MergeFrom(from._internal_result());
  }
}

void GetFriendsResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendsResponse::CopyFrom(const GetFriendsResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendsResponse::IsInitialized() const {
  return true;
}

void GetFriendsResponse::InternalSwap(GetFriendsResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  friends_.InternalSwap(&other->friends_);
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetFriendsResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

FriendsServiceRpc::~FriendsServiceRpc() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* FriendsServiceRpc::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_friend_2eproto);
  return file_level_service_descriptors_friend_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* FriendsServiceRpc::GetDescriptor() {
  return descriptor();
}

void FriendsServiceRpc::GetFriendsList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::fixbug::GetFriendsRequest*,
                         ::fixbug::GetFriendsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetFriendsList() not implemented.");
  done->Run();
}

void FriendsServiceRpc::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_friend_2eproto[0]);
  switch(method->index()) {
    case 0:
      GetFriendsList(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::fixbug::GetFriendsRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::fixbug::GetFriendsResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& FriendsServiceRpc::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendsRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& FriendsServiceRpc::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendsResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

FriendsServiceRpc_Stub::FriendsServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
FriendsServiceRpc_Stub::FriendsServiceRpc_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
FriendsServiceRpc_Stub::~FriendsServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void FriendsServiceRpc_Stub::GetFriendsList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::fixbug::GetFriendsRequest* request,
                              ::fixbug::GetFriendsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace fixbug
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::fixbug::ResultCode* Arena::CreateMaybeMessage< ::fixbug::ResultCode >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::ResultCode >(arena);
}
template<> PROTOBUF_NOINLINE ::fixbug::GetFriendsRequest* Arena::CreateMaybeMessage< ::fixbug::GetFriendsRequest >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::GetFriendsRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::fixbug::GetFriendsResponse* Arena::CreateMaybeMessage< ::fixbug::GetFriendsResponse >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::GetFriendsResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>