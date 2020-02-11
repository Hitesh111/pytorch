#pragma once

// @generated by aten/src/ATen/gen.py

#include <c10/core/TensorOptions.h>
#include <c10/core/Scalar.h>
#include <c10/core/QScheme.h>
#include <c10/core/MemoryFormat.h>
#include <c10/util/ArrayRef.h>
#include <c10/util/intrusive_ptr.h>
#include <torch/csrc/WindowsTorchApiMacro.h>
#include <ATen/Dimname.h>



namespace c10 {
struct Storage;
}

namespace at {

class Tensor;
using TensorList = ArrayRef<Tensor>;

class Context;
struct Generator;

struct Quantizer;
// This is temporary typedef to enable Quantizer in aten native function API
// we'll remove them when we are actually exposing Quantizer class
// to frontend
using ConstQuantizerPtr = const c10::intrusive_ptr<Quantizer>&;

namespace SparseCPUType {
  Tensor add(const Tensor & self, const Tensor & other, Scalar alpha);
  Tensor & add_(Tensor & self, const Tensor & other, Scalar alpha);
  Tensor & add_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha);
  Tensor div(const Tensor & self, const Tensor & other);
  Tensor & div_(Tensor & self, const Tensor & other);
  Tensor & div_out(Tensor & out, const Tensor & self, const Tensor & other);
  Tensor empty(IntArrayRef size, c10::optional<ScalarType> dtype, c10::optional<Layout> layout, c10::optional<Device> device, c10::optional<bool> pin_memory, c10::optional<MemoryFormat> memory_format);
  Tensor isnan(const Tensor & self);
  Tensor & log1p_(Tensor & self);
  Tensor & log1p_out(Tensor & out, const Tensor & self);
  Tensor mm(const Tensor & self, const Tensor & mat2);
  Tensor & mm_out(Tensor & out, const Tensor & self, const Tensor & mat2);
  Tensor mul(const Tensor & self, const Tensor & other);
  Tensor & mul_(Tensor & self, const Tensor & other);
  Tensor & mul_out(Tensor & out, const Tensor & self, const Tensor & other);
  Tensor narrow_copy(const Tensor & self, int64_t dim, int64_t start, int64_t length);
  Tensor & sspaddmm_out(Tensor & out, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  Tensor native_norm(const Tensor & self, Scalar p);
  Tensor _sparse_sum_backward(const Tensor & grad, const Tensor & self, IntArrayRef dim);
  Tensor clone(const Tensor & self, c10::optional<MemoryFormat> memory_format);
  Tensor & pow_out(Tensor & out, const Tensor & self, Scalar exponent);
  Tensor pow(const Tensor & self, Scalar exponent);
  Tensor & zero_(Tensor & self);
  Tensor & sub_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha);
  Tensor sub(const Tensor & self, const Tensor & other, Scalar alpha);
  Tensor & sub_(Tensor & self, const Tensor & other, Scalar alpha);
  Tensor & addmm_out(Tensor & out, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  Tensor addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  Tensor & addmm_(Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  Tensor _sparse_coo_tensor_with_dims(int64_t sparse_dim, int64_t dense_dim, IntArrayRef size, c10::optional<ScalarType> dtype, c10::optional<Layout> layout, c10::optional<Device> device, c10::optional<bool> pin_memory);
  Tensor _sparse_coo_tensor_with_dims_and_tensors(int64_t sparse_dim, int64_t dense_dim, IntArrayRef size, const Tensor & indices, const Tensor & values, ScalarType dtype, Layout layout, Device device, bool pin_memory);
  Tensor & sparse_resize_(Tensor & self, IntArrayRef size, int64_t sparse_dim, int64_t dense_dim);
  Tensor & sparse_resize_and_clear_(Tensor & self, IntArrayRef size, int64_t sparse_dim, int64_t dense_dim);
  Tensor sparse_mask(const Tensor & self, const Tensor & mask);
  Tensor to_dense(const Tensor & self);
  int64_t sparse_dim(const Tensor & self);
  int64_t _dimI(const Tensor & self);
  int64_t dense_dim(const Tensor & self);
  int64_t _dimV(const Tensor & self);
  int64_t _nnz(const Tensor & self);
  Tensor coalesce(const Tensor & self);
  bool is_coalesced(const Tensor & self);
  Tensor _indices(const Tensor & self);
  Tensor _values(const Tensor & self);
  Tensor & _coalesced_(Tensor & self, bool coalesced);
  Tensor indices(const Tensor & self);
  Tensor values(const Tensor & self);
  Tensor & hspmm_out(Tensor & out, const Tensor & mat1, const Tensor & mat2);
  Tensor hspmm(const Tensor & mat1, const Tensor & mat2);
  Tensor & copy_sparse_to_sparse_(Tensor & self, const Tensor & src, bool non_blocking);
  Tensor index_select(const Tensor & self, int64_t dim, const Tensor & index);
  Tensor any(const Tensor & self);
}

} // namespace at
