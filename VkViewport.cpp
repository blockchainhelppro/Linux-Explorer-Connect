/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkViewport.h"

Nan::Persistent<v8::FunctionTemplate> _VkViewport::constructor;

_VkViewport::_VkViewport() {
  
}

_VkViewport::~_VkViewport() {
  //printf("VkViewport deconstructed!!\n");
}

void _VkViewport::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkViewport::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkViewport").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);
  SetPrototypeAccessor(proto, Nan::New("minDepth").ToLocalChecked(), GetminDepth, SetminDepth, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDepth").ToLocalChecked(), GetmaxDepth, SetmaxDepth, ctor);
  Nan::Set(target, Nan::New("VkViewport").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkViewport::New) {
  if (info.IsConstructCall()) {
    _VkViewport* self = new _VkViewport();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("x").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("y").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("width").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("height").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("minDepth").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("maxDepth").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkViewport constructor cannot be invoked without 'new'");
  }
};

// x
NAN_GETTER(_VkViewport::Getx) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.x));
}NAN_SETTER(_VkViewport::Setx) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.x = static_cast<float>(value->NumberValue());
}// y
NAN_GETTER(_VkViewport::Gety) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.y));
}NAN_SETTER(_VkViewport::Sety) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.y = static_cast<float>(value->NumberValue());
}// width
NAN_GETTER(_VkViewport::Getwidth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.width));
}NAN_SETTER(_VkViewport::Setwidth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.width = static_cast<float>(value->NumberValue());
}// height
NAN_GETTER(_VkViewport::Getheight) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.height));
}NAN_SETTER(_VkViewport::Setheight) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.height = static_cast<float>(value->NumberValue());
}// minDepth
NAN_GETTER(_VkViewport::GetminDepth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minDepth));
}NAN_SETTER(_VkViewport::SetminDepth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.minDepth = static_cast<float>(value->NumberValue());
}// maxDepth
NAN_GETTER(_VkViewport::GetmaxDepth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDepth));
}NAN_SETTER(_VkViewport::SetmaxDepth) {
  _VkViewport *self = Nan::ObjectWrap::Unwrap<_VkViewport>(info.This());
  self->instance.maxDepth = static_cast<float>(value->NumberValue());
}