// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardboardDevice.proto

#ifndef PROTOBUF_CardboardDevice_2eproto__INCLUDED
#define PROTOBUF_CardboardDevice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_CardboardDevice_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsDeviceParamsImpl();
void InitDefaultsDeviceParams();
inline void InitDefaults() {
  InitDefaultsDeviceParams();
}
}  // namespace protobuf_CardboardDevice_2eproto
class DeviceParams;
class DeviceParamsDefaultTypeInternal;
extern DeviceParamsDefaultTypeInternal _DeviceParams_default_instance_;

enum DeviceParams_VerticalAlignmentType {
  DeviceParams_VerticalAlignmentType_BOTTOM = 0,
  DeviceParams_VerticalAlignmentType_CENTER = 1,
  DeviceParams_VerticalAlignmentType_TOP = 2
};
bool DeviceParams_VerticalAlignmentType_IsValid(int value);
const DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN = DeviceParams_VerticalAlignmentType_BOTTOM;
const DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX = DeviceParams_VerticalAlignmentType_TOP;
const int DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE = DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DeviceParams_VerticalAlignmentType_descriptor();
inline const ::std::string& DeviceParams_VerticalAlignmentType_Name(DeviceParams_VerticalAlignmentType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DeviceParams_VerticalAlignmentType_descriptor(), value);
}
inline bool DeviceParams_VerticalAlignmentType_Parse(
    const ::std::string& name, DeviceParams_VerticalAlignmentType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DeviceParams_VerticalAlignmentType>(
    DeviceParams_VerticalAlignmentType_descriptor(), name, value);
}
enum DeviceParams_ButtonType {
  DeviceParams_ButtonType_NONE = 0,
  DeviceParams_ButtonType_MAGNET = 1,
  DeviceParams_ButtonType_TOUCH = 2,
  DeviceParams_ButtonType_INDIRECT_TOUCH = 3
};
bool DeviceParams_ButtonType_IsValid(int value);
const DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MIN = DeviceParams_ButtonType_NONE;
const DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MAX = DeviceParams_ButtonType_INDIRECT_TOUCH;
const int DeviceParams_ButtonType_ButtonType_ARRAYSIZE = DeviceParams_ButtonType_ButtonType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DeviceParams_ButtonType_descriptor();
inline const ::std::string& DeviceParams_ButtonType_Name(DeviceParams_ButtonType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DeviceParams_ButtonType_descriptor(), value);
}
inline bool DeviceParams_ButtonType_Parse(
    const ::std::string& name, DeviceParams_ButtonType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DeviceParams_ButtonType>(
    DeviceParams_ButtonType_descriptor(), name, value);
}
// ===================================================================

class DeviceParams : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DeviceParams) */ {
 public:
  DeviceParams();
  virtual ~DeviceParams();

  DeviceParams(const DeviceParams& from);

  inline DeviceParams& operator=(const DeviceParams& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DeviceParams(DeviceParams&& from) noexcept
    : DeviceParams() {
    *this = ::std::move(from);
  }

  inline DeviceParams& operator=(DeviceParams&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceParams& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DeviceParams* internal_default_instance() {
    return reinterpret_cast<const DeviceParams*>(
               &_DeviceParams_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(DeviceParams* other);
  friend void swap(DeviceParams& a, DeviceParams& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DeviceParams* New() const PROTOBUF_FINAL { return New(NULL); }

  DeviceParams* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DeviceParams& from);
  void MergeFrom(const DeviceParams& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DeviceParams* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef DeviceParams_VerticalAlignmentType VerticalAlignmentType;
  static const VerticalAlignmentType BOTTOM =
    DeviceParams_VerticalAlignmentType_BOTTOM;
  static const VerticalAlignmentType CENTER =
    DeviceParams_VerticalAlignmentType_CENTER;
  static const VerticalAlignmentType TOP =
    DeviceParams_VerticalAlignmentType_TOP;
  static inline bool VerticalAlignmentType_IsValid(int value) {
    return DeviceParams_VerticalAlignmentType_IsValid(value);
  }
  static const VerticalAlignmentType VerticalAlignmentType_MIN =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN;
  static const VerticalAlignmentType VerticalAlignmentType_MAX =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX;
  static const int VerticalAlignmentType_ARRAYSIZE =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  VerticalAlignmentType_descriptor() {
    return DeviceParams_VerticalAlignmentType_descriptor();
  }
  static inline const ::std::string& VerticalAlignmentType_Name(VerticalAlignmentType value) {
    return DeviceParams_VerticalAlignmentType_Name(value);
  }
  static inline bool VerticalAlignmentType_Parse(const ::std::string& name,
      VerticalAlignmentType* value) {
    return DeviceParams_VerticalAlignmentType_Parse(name, value);
  }

  typedef DeviceParams_ButtonType ButtonType;
  static const ButtonType NONE =
    DeviceParams_ButtonType_NONE;
  static const ButtonType MAGNET =
    DeviceParams_ButtonType_MAGNET;
  static const ButtonType TOUCH =
    DeviceParams_ButtonType_TOUCH;
  static const ButtonType INDIRECT_TOUCH =
    DeviceParams_ButtonType_INDIRECT_TOUCH;
  static inline bool ButtonType_IsValid(int value) {
    return DeviceParams_ButtonType_IsValid(value);
  }
  static const ButtonType ButtonType_MIN =
    DeviceParams_ButtonType_ButtonType_MIN;
  static const ButtonType ButtonType_MAX =
    DeviceParams_ButtonType_ButtonType_MAX;
  static const int ButtonType_ARRAYSIZE =
    DeviceParams_ButtonType_ButtonType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ButtonType_descriptor() {
    return DeviceParams_ButtonType_descriptor();
  }
  static inline const ::std::string& ButtonType_Name(ButtonType value) {
    return DeviceParams_ButtonType_Name(value);
  }
  static inline bool ButtonType_Parse(const ::std::string& name,
      ButtonType* value) {
    return DeviceParams_ButtonType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated float left_eye_field_of_view_angles = 5 [packed = true];
  int left_eye_field_of_view_angles_size() const;
  void clear_left_eye_field_of_view_angles();
  static const int kLeftEyeFieldOfViewAnglesFieldNumber = 5;
  float left_eye_field_of_view_angles(int index) const;
  void set_left_eye_field_of_view_angles(int index, float value);
  void add_left_eye_field_of_view_angles(float value);
  const ::google::protobuf::RepeatedField< float >&
      left_eye_field_of_view_angles() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_left_eye_field_of_view_angles();

  // repeated float distortion_coefficients = 7 [packed = true];
  int distortion_coefficients_size() const;
  void clear_distortion_coefficients();
  static const int kDistortionCoefficientsFieldNumber = 7;
  float distortion_coefficients(int index) const;
  void set_distortion_coefficients(int index, float value);
  void add_distortion_coefficients(float value);
  const ::google::protobuf::RepeatedField< float >&
      distortion_coefficients() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_distortion_coefficients();

  // optional string vendor = 1;
  bool has_vendor() const;
  void clear_vendor();
  static const int kVendorFieldNumber = 1;
  const ::std::string& vendor() const;
  void set_vendor(const ::std::string& value);
  #if LANG_CXX11
  void set_vendor(::std::string&& value);
  #endif
  void set_vendor(const char* value);
  void set_vendor(const char* value, size_t size);
  ::std::string* mutable_vendor();
  ::std::string* release_vendor();
  void set_allocated_vendor(::std::string* vendor);

  // optional string model = 2;
  bool has_model() const;
  void clear_model();
  static const int kModelFieldNumber = 2;
  const ::std::string& model() const;
  void set_model(const ::std::string& value);
  #if LANG_CXX11
  void set_model(::std::string&& value);
  #endif
  void set_model(const char* value);
  void set_model(const char* value, size_t size);
  ::std::string* mutable_model();
  ::std::string* release_model();
  void set_allocated_model(::std::string* model);

  // optional float screen_to_lens_distance = 3;
  bool has_screen_to_lens_distance() const;
  void clear_screen_to_lens_distance();
  static const int kScreenToLensDistanceFieldNumber = 3;
  float screen_to_lens_distance() const;
  void set_screen_to_lens_distance(float value);

  // optional float inter_lens_distance = 4;
  bool has_inter_lens_distance() const;
  void clear_inter_lens_distance();
  static const int kInterLensDistanceFieldNumber = 4;
  float inter_lens_distance() const;
  void set_inter_lens_distance(float value);

  // optional float tray_to_lens_distance = 6;
  bool has_tray_to_lens_distance() const;
  void clear_tray_to_lens_distance();
  static const int kTrayToLensDistanceFieldNumber = 6;
  float tray_to_lens_distance() const;
  void set_tray_to_lens_distance(float value);

  // optional bool has_magnet = 10;
  bool has_has_magnet() const;
  void clear_has_magnet();
  static const int kHasMagnetFieldNumber = 10;
  bool has_magnet() const;
  void set_has_magnet(bool value);

  // optional .DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
  bool has_vertical_alignment() const;
  void clear_vertical_alignment();
  static const int kVerticalAlignmentFieldNumber = 11;
  ::DeviceParams_VerticalAlignmentType vertical_alignment() const;
  void set_vertical_alignment(::DeviceParams_VerticalAlignmentType value);

  // optional .DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
  bool has_primary_button() const;
  void clear_primary_button();
  static const int kPrimaryButtonFieldNumber = 12;
  ::DeviceParams_ButtonType primary_button() const;
  void set_primary_button(::DeviceParams_ButtonType value);

  // @@protoc_insertion_point(class_scope:DeviceParams)
 private:
  void set_has_vendor();
  void clear_has_vendor();
  void set_has_model();
  void clear_has_model();
  void set_has_screen_to_lens_distance();
  void clear_has_screen_to_lens_distance();
  void set_has_inter_lens_distance();
  void clear_has_inter_lens_distance();
  void set_has_vertical_alignment();
  void clear_has_vertical_alignment();
  void set_has_tray_to_lens_distance();
  void clear_has_tray_to_lens_distance();
  void set_has_has_magnet();
  void clear_has_has_magnet();
  void set_has_primary_button();
  void clear_has_primary_button();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > left_eye_field_of_view_angles_;
  mutable int _left_eye_field_of_view_angles_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > distortion_coefficients_;
  mutable int _distortion_coefficients_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr vendor_;
  ::google::protobuf::internal::ArenaStringPtr model_;
  float screen_to_lens_distance_;
  float inter_lens_distance_;
  float tray_to_lens_distance_;
  bool has_magnet_;
  int vertical_alignment_;
  int primary_button_;
  friend struct ::protobuf_CardboardDevice_2eproto::TableStruct;
  friend void ::protobuf_CardboardDevice_2eproto::InitDefaultsDeviceParamsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DeviceParams

// optional string vendor = 1;
inline bool DeviceParams::has_vendor() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceParams::set_has_vendor() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceParams::clear_has_vendor() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceParams::clear_vendor() {
  vendor_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_vendor();
}
inline const ::std::string& DeviceParams::vendor() const {
  // @@protoc_insertion_point(field_get:DeviceParams.vendor)
  return vendor_.GetNoArena();
}
inline void DeviceParams::set_vendor(const ::std::string& value) {
  set_has_vendor();
  vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DeviceParams.vendor)
}
#if LANG_CXX11
inline void DeviceParams::set_vendor(::std::string&& value) {
  set_has_vendor();
  vendor_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DeviceParams.vendor)
}
#endif
inline void DeviceParams::set_vendor(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_vendor();
  vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DeviceParams.vendor)
}
inline void DeviceParams::set_vendor(const char* value, size_t size) {
  set_has_vendor();
  vendor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DeviceParams.vendor)
}
inline ::std::string* DeviceParams::mutable_vendor() {
  set_has_vendor();
  // @@protoc_insertion_point(field_mutable:DeviceParams.vendor)
  return vendor_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceParams::release_vendor() {
  // @@protoc_insertion_point(field_release:DeviceParams.vendor)
  clear_has_vendor();
  return vendor_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceParams::set_allocated_vendor(::std::string* vendor) {
  if (vendor != NULL) {
    set_has_vendor();
  } else {
    clear_has_vendor();
  }
  vendor_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vendor);
  // @@protoc_insertion_point(field_set_allocated:DeviceParams.vendor)
}

// optional string model = 2;
inline bool DeviceParams::has_model() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceParams::set_has_model() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceParams::clear_has_model() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceParams::clear_model() {
  model_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_model();
}
inline const ::std::string& DeviceParams::model() const {
  // @@protoc_insertion_point(field_get:DeviceParams.model)
  return model_.GetNoArena();
}
inline void DeviceParams::set_model(const ::std::string& value) {
  set_has_model();
  model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DeviceParams.model)
}
#if LANG_CXX11
inline void DeviceParams::set_model(::std::string&& value) {
  set_has_model();
  model_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DeviceParams.model)
}
#endif
inline void DeviceParams::set_model(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_model();
  model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DeviceParams.model)
}
inline void DeviceParams::set_model(const char* value, size_t size) {
  set_has_model();
  model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DeviceParams.model)
}
inline ::std::string* DeviceParams::mutable_model() {
  set_has_model();
  // @@protoc_insertion_point(field_mutable:DeviceParams.model)
  return model_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceParams::release_model() {
  // @@protoc_insertion_point(field_release:DeviceParams.model)
  clear_has_model();
  return model_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceParams::set_allocated_model(::std::string* model) {
  if (model != NULL) {
    set_has_model();
  } else {
    clear_has_model();
  }
  model_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model);
  // @@protoc_insertion_point(field_set_allocated:DeviceParams.model)
}

// optional float screen_to_lens_distance = 3;
inline bool DeviceParams::has_screen_to_lens_distance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceParams::set_has_screen_to_lens_distance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceParams::clear_has_screen_to_lens_distance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceParams::clear_screen_to_lens_distance() {
  screen_to_lens_distance_ = 0;
  clear_has_screen_to_lens_distance();
}
inline float DeviceParams::screen_to_lens_distance() const {
  // @@protoc_insertion_point(field_get:DeviceParams.screen_to_lens_distance)
  return screen_to_lens_distance_;
}
inline void DeviceParams::set_screen_to_lens_distance(float value) {
  set_has_screen_to_lens_distance();
  screen_to_lens_distance_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.screen_to_lens_distance)
}

// optional float inter_lens_distance = 4;
inline bool DeviceParams::has_inter_lens_distance() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceParams::set_has_inter_lens_distance() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceParams::clear_has_inter_lens_distance() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceParams::clear_inter_lens_distance() {
  inter_lens_distance_ = 0;
  clear_has_inter_lens_distance();
}
inline float DeviceParams::inter_lens_distance() const {
  // @@protoc_insertion_point(field_get:DeviceParams.inter_lens_distance)
  return inter_lens_distance_;
}
inline void DeviceParams::set_inter_lens_distance(float value) {
  set_has_inter_lens_distance();
  inter_lens_distance_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.inter_lens_distance)
}

// repeated float left_eye_field_of_view_angles = 5 [packed = true];
inline int DeviceParams::left_eye_field_of_view_angles_size() const {
  return left_eye_field_of_view_angles_.size();
}
inline void DeviceParams::clear_left_eye_field_of_view_angles() {
  left_eye_field_of_view_angles_.Clear();
}
inline float DeviceParams::left_eye_field_of_view_angles(int index) const {
  // @@protoc_insertion_point(field_get:DeviceParams.left_eye_field_of_view_angles)
  return left_eye_field_of_view_angles_.Get(index);
}
inline void DeviceParams::set_left_eye_field_of_view_angles(int index, float value) {
  left_eye_field_of_view_angles_.Set(index, value);
  // @@protoc_insertion_point(field_set:DeviceParams.left_eye_field_of_view_angles)
}
inline void DeviceParams::add_left_eye_field_of_view_angles(float value) {
  left_eye_field_of_view_angles_.Add(value);
  // @@protoc_insertion_point(field_add:DeviceParams.left_eye_field_of_view_angles)
}
inline const ::google::protobuf::RepeatedField< float >&
DeviceParams::left_eye_field_of_view_angles() const {
  // @@protoc_insertion_point(field_list:DeviceParams.left_eye_field_of_view_angles)
  return left_eye_field_of_view_angles_;
}
inline ::google::protobuf::RepeatedField< float >*
DeviceParams::mutable_left_eye_field_of_view_angles() {
  // @@protoc_insertion_point(field_mutable_list:DeviceParams.left_eye_field_of_view_angles)
  return &left_eye_field_of_view_angles_;
}

// optional .DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
inline bool DeviceParams::has_vertical_alignment() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DeviceParams::set_has_vertical_alignment() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DeviceParams::clear_has_vertical_alignment() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DeviceParams::clear_vertical_alignment() {
  vertical_alignment_ = 0;
  clear_has_vertical_alignment();
}
inline ::DeviceParams_VerticalAlignmentType DeviceParams::vertical_alignment() const {
  // @@protoc_insertion_point(field_get:DeviceParams.vertical_alignment)
  return static_cast< ::DeviceParams_VerticalAlignmentType >(vertical_alignment_);
}
inline void DeviceParams::set_vertical_alignment(::DeviceParams_VerticalAlignmentType value) {
  assert(::DeviceParams_VerticalAlignmentType_IsValid(value));
  set_has_vertical_alignment();
  vertical_alignment_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.vertical_alignment)
}

// optional float tray_to_lens_distance = 6;
inline bool DeviceParams::has_tray_to_lens_distance() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DeviceParams::set_has_tray_to_lens_distance() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DeviceParams::clear_has_tray_to_lens_distance() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DeviceParams::clear_tray_to_lens_distance() {
  tray_to_lens_distance_ = 0;
  clear_has_tray_to_lens_distance();
}
inline float DeviceParams::tray_to_lens_distance() const {
  // @@protoc_insertion_point(field_get:DeviceParams.tray_to_lens_distance)
  return tray_to_lens_distance_;
}
inline void DeviceParams::set_tray_to_lens_distance(float value) {
  set_has_tray_to_lens_distance();
  tray_to_lens_distance_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.tray_to_lens_distance)
}

// repeated float distortion_coefficients = 7 [packed = true];
inline int DeviceParams::distortion_coefficients_size() const {
  return distortion_coefficients_.size();
}
inline void DeviceParams::clear_distortion_coefficients() {
  distortion_coefficients_.Clear();
}
inline float DeviceParams::distortion_coefficients(int index) const {
  // @@protoc_insertion_point(field_get:DeviceParams.distortion_coefficients)
  return distortion_coefficients_.Get(index);
}
inline void DeviceParams::set_distortion_coefficients(int index, float value) {
  distortion_coefficients_.Set(index, value);
  // @@protoc_insertion_point(field_set:DeviceParams.distortion_coefficients)
}
inline void DeviceParams::add_distortion_coefficients(float value) {
  distortion_coefficients_.Add(value);
  // @@protoc_insertion_point(field_add:DeviceParams.distortion_coefficients)
}
inline const ::google::protobuf::RepeatedField< float >&
DeviceParams::distortion_coefficients() const {
  // @@protoc_insertion_point(field_list:DeviceParams.distortion_coefficients)
  return distortion_coefficients_;
}
inline ::google::protobuf::RepeatedField< float >*
DeviceParams::mutable_distortion_coefficients() {
  // @@protoc_insertion_point(field_mutable_list:DeviceParams.distortion_coefficients)
  return &distortion_coefficients_;
}

// optional bool has_magnet = 10;
inline bool DeviceParams::has_has_magnet() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DeviceParams::set_has_has_magnet() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DeviceParams::clear_has_has_magnet() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DeviceParams::clear_has_magnet() {
  has_magnet_ = false;
  clear_has_has_magnet();
}
inline bool DeviceParams::has_magnet() const {
  // @@protoc_insertion_point(field_get:DeviceParams.has_magnet)
  return has_magnet_;
}
inline void DeviceParams::set_has_magnet(bool value) {
  set_has_has_magnet();
  has_magnet_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.has_magnet)
}

// optional .DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
inline bool DeviceParams::has_primary_button() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DeviceParams::set_has_primary_button() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DeviceParams::clear_has_primary_button() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DeviceParams::clear_primary_button() {
  primary_button_ = 1;
  clear_has_primary_button();
}
inline ::DeviceParams_ButtonType DeviceParams::primary_button() const {
  // @@protoc_insertion_point(field_get:DeviceParams.primary_button)
  return static_cast< ::DeviceParams_ButtonType >(primary_button_);
}
inline void DeviceParams::set_primary_button(::DeviceParams_ButtonType value) {
  assert(::DeviceParams_ButtonType_IsValid(value));
  set_has_primary_button();
  primary_button_ = value;
  // @@protoc_insertion_point(field_set:DeviceParams.primary_button)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::DeviceParams_VerticalAlignmentType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DeviceParams_VerticalAlignmentType>() {
  return ::DeviceParams_VerticalAlignmentType_descriptor();
}
template <> struct is_proto_enum< ::DeviceParams_ButtonType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DeviceParams_ButtonType>() {
  return ::DeviceParams_ButtonType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CardboardDevice_2eproto__INCLUDED
