// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_route.proto

#include "category_route.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class Route_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Route_Item>
      _instance;
} _Route_Item_default_instance_;
class RouteDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Route>
      _instance;
} _Route_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5froute_2eproto {
void InitDefaultsRoute_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_Route_Item_default_instance_;
    new (ptr) ::aspia::proto::Route_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Route_Item::InitAsDefaultInstance();
}

void InitDefaultsRoute_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRoute_ItemImpl);
}

void InitDefaultsRouteImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5froute_2eproto::InitDefaultsRoute_Item();
  {
    void* ptr = &::aspia::proto::_Route_default_instance_;
    new (ptr) ::aspia::proto::Route();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Route::InitAsDefaultInstance();
}

void InitDefaultsRoute() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRouteImpl);
}

}  // namespace protobuf_category_5froute_2eproto
namespace aspia {
namespace proto {

// ===================================================================

void Route_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Route_Item::kDestonationFieldNumber;
const int Route_Item::kMaskFieldNumber;
const int Route_Item::kGatewayFieldNumber;
const int Route_Item::kMetricFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Route_Item::Route_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5froute_2eproto::InitDefaultsRoute_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Route.Item)
}
Route_Item::Route_Item(const Route_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  destonation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.destonation().size() > 0) {
    destonation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.destonation_);
  }
  mask_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.mask().size() > 0) {
    mask_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mask_);
  }
  gateway_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.gateway().size() > 0) {
    gateway_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.gateway_);
  }
  metric_ = from.metric_;
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Route.Item)
}

void Route_Item::SharedCtor() {
  destonation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mask_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gateway_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metric_ = 0u;
  _cached_size_ = 0;
}

Route_Item::~Route_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.Route.Item)
  SharedDtor();
}

void Route_Item::SharedDtor() {
  destonation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mask_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gateway_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Route_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Route_Item& Route_Item::default_instance() {
  ::protobuf_category_5froute_2eproto::InitDefaultsRoute_Item();
  return *internal_default_instance();
}

Route_Item* Route_Item::New(::google::protobuf::Arena* arena) const {
  Route_Item* n = new Route_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Route_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Route.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  destonation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mask_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gateway_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metric_ = 0u;
  _internal_metadata_.Clear();
}

bool Route_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Route.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string destonation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_destonation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->destonation().data(), static_cast<int>(this->destonation().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Route.Item.destonation"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string mask = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mask()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mask().data(), static_cast<int>(this->mask().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Route.Item.mask"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gateway = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gateway()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gateway().data(), static_cast<int>(this->gateway().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Route.Item.gateway"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 metric = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &metric_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Route.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Route.Item)
  return false;
#undef DO_
}

void Route_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Route.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string destonation = 1;
  if (this->destonation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->destonation().data(), static_cast<int>(this->destonation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Route.Item.destonation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->destonation(), output);
  }

  // string mask = 2;
  if (this->mask().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mask().data(), static_cast<int>(this->mask().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Route.Item.mask");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->mask(), output);
  }

  // string gateway = 3;
  if (this->gateway().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gateway().data(), static_cast<int>(this->gateway().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Route.Item.gateway");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->gateway(), output);
  }

  // uint32 metric = 4;
  if (this->metric() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->metric(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Route.Item)
}

size_t Route_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Route.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string destonation = 1;
  if (this->destonation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->destonation());
  }

  // string mask = 2;
  if (this->mask().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mask());
  }

  // string gateway = 3;
  if (this->gateway().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gateway());
  }

  // uint32 metric = 4;
  if (this->metric() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->metric());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Route_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Route_Item*>(&from));
}

void Route_Item::MergeFrom(const Route_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Route.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.destonation().size() > 0) {

    destonation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.destonation_);
  }
  if (from.mask().size() > 0) {

    mask_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mask_);
  }
  if (from.gateway().size() > 0) {

    gateway_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.gateway_);
  }
  if (from.metric() != 0) {
    set_metric(from.metric());
  }
}

void Route_Item::CopyFrom(const Route_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Route.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Route_Item::IsInitialized() const {
  return true;
}

void Route_Item::Swap(Route_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Route_Item::InternalSwap(Route_Item* other) {
  using std::swap;
  destonation_.Swap(&other->destonation_);
  mask_.Swap(&other->mask_);
  gateway_.Swap(&other->gateway_);
  swap(metric_, other->metric_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Route_Item::GetTypeName() const {
  return "aspia.proto.Route.Item";
}


// ===================================================================

void Route::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Route::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Route::Route()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5froute_2eproto::InitDefaultsRoute();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Route)
}
Route::Route(const Route& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Route)
}

void Route::SharedCtor() {
  _cached_size_ = 0;
}

Route::~Route() {
  // @@protoc_insertion_point(destructor:aspia.proto.Route)
  SharedDtor();
}

void Route::SharedDtor() {
}

void Route::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Route& Route::default_instance() {
  ::protobuf_category_5froute_2eproto::InitDefaultsRoute();
  return *internal_default_instance();
}

Route* Route::New(::google::protobuf::Arena* arena) const {
  Route* n = new Route;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Route::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Route)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool Route::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Route)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.Route.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Route)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Route)
  return false;
#undef DO_
}

void Route::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Route)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.Route.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Route)
}

size_t Route::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Route)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.Route.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Route::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Route*>(&from));
}

void Route::MergeFrom(const Route& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Route)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void Route::CopyFrom(const Route& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Route)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Route::IsInitialized() const {
  return true;
}

void Route::Swap(Route* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Route::InternalSwap(Route* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Route::GetTypeName() const {
  return "aspia.proto.Route";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)