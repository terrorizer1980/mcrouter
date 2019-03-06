/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */

namespace carbon {
namespace test {

template <class Writer>
void TestCompactRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, testEnum());
  writer.writeField(3 /* field id */, testBool());
  writer.writeField(4 /* field id */, testChar());
  writer.writeField(5 /* field id */, testInt8());
  writer.writeField(6 /* field id */, testInt16());
  writer.writeField(7 /* field id */, testInt32());
  writer.writeField(8 /* field id */, testInt64());
  writer.writeField(9 /* field id */, testUInt8());
  writer.writeField(10 /* field id */, testUInt16());
  writer.writeField(11 /* field id */, testUInt32());
  writer.writeField(12 /* field id */, testUInt64());
  writer.writeField(13 /* field id */, testShortString());
  writer.writeField(14 /* field id */, testLongString());
  writer.writeField(15 /* field id */, testIobuf());
  writer.writeField(16 /* field id */, testList());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void TestCompactRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "testEnum", this->testEnum())) {
    return;
  }
  if (!v.visitField(3, "testBool", this->testBool())) {
    return;
  }
  if (!v.visitField(4, "testChar", this->testChar())) {
    return;
  }
  if (!v.visitField(5, "testInt8", this->testInt8())) {
    return;
  }
  if (!v.visitField(6, "testInt16", this->testInt16())) {
    return;
  }
  if (!v.visitField(7, "testInt32", this->testInt32())) {
    return;
  }
  if (!v.visitField(8, "testInt64", this->testInt64())) {
    return;
  }
  if (!v.visitField(9, "testUInt8", this->testUInt8())) {
    return;
  }
  if (!v.visitField(10, "testUInt16", this->testUInt16())) {
    return;
  }
  if (!v.visitField(11, "testUInt32", this->testUInt32())) {
    return;
  }
  if (!v.visitField(12, "testUInt64", this->testUInt64())) {
    return;
  }
  if (!v.visitField(13, "testShortString", this->testShortString())) {
    return;
  }
  if (!v.visitField(14, "testLongString", this->testLongString())) {
    return;
  }
  if (!v.visitField(15, "testIobuf", this->testIobuf())) {
    return;
  }
  if (!v.visitField(16, "testList", this->testList())) {
    return;
  }
}

template <class V>
void TestCompactRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "testEnum", this->testEnum())) {
    return;
  }
  if (!v.visitField(3, "testBool", this->testBool())) {
    return;
  }
  if (!v.visitField(4, "testChar", this->testChar())) {
    return;
  }
  if (!v.visitField(5, "testInt8", this->testInt8())) {
    return;
  }
  if (!v.visitField(6, "testInt16", this->testInt16())) {
    return;
  }
  if (!v.visitField(7, "testInt32", this->testInt32())) {
    return;
  }
  if (!v.visitField(8, "testInt64", this->testInt64())) {
    return;
  }
  if (!v.visitField(9, "testUInt8", this->testUInt8())) {
    return;
  }
  if (!v.visitField(10, "testUInt16", this->testUInt16())) {
    return;
  }
  if (!v.visitField(11, "testUInt32", this->testUInt32())) {
    return;
  }
  if (!v.visitField(12, "testUInt64", this->testUInt64())) {
    return;
  }
  if (!v.visitField(13, "testShortString", this->testShortString())) {
    return;
  }
  if (!v.visitField(14, "testLongString", this->testLongString())) {
    return;
  }
  if (!v.visitField(15, "testIobuf", this->testIobuf())) {
    return;
  }
  if (!v.visitField(16, "testList", this->testList())) {
    return;
  }
}

template <class Writer>
void TestCompactReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, valInt32());
  writer.writeField(3 /* field id */, valInt64());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void TestCompactReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "valInt32", this->valInt32())) {
    return;
  }
  if (!v.visitField(3, "valInt64", this->valInt64())) {
    return;
  }
}

template <class V>
void TestCompactReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "valInt32", this->valInt32())) {
    return;
  }
  if (!v.visitField(3, "valInt64", this->valInt64())) {
    return;
  }
}
} // namespace test
} // namespace carbon