// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#pragma once

#include <memory>

namespace search { class IDestructorCallback; }

namespace proton {

class MoveOperation;

/**
 * Interface used by DocumentBucketMover to handle the moving of a single document.
 */
struct IDocumentMoveHandler
{
    virtual void handleMove(MoveOperation &op, std::shared_ptr<search::IDestructorCallback> moveDoneCtx) = 0;
    virtual ~IDocumentMoveHandler() {}
};


} // namespace proton

