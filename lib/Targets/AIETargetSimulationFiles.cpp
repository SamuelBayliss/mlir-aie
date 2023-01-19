
#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/IR/Attributes.h"
#include "mlir/IR/BlockAndValueMapping.h"
#include "mlir/IR/Location.h"
#include "mlir/IR/PatternMatch.h"
#include "mlir/Pass/Pass.h"
#include "mlir/Target/LLVMIR/Import.h"
#include "mlir/Tools/mlir-translate/MlirTranslateMain.h"
#include "mlir/Transforms/DialectConversion.h"
#include "mlir/Transforms/Passes.h"

#include "llvm/ADT/StringExtras.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetSelect.h"

#include "aie/AIENetlistAnalysis.h"
#include "aie/Dialect/AIE/IR/AIEDialect.h"

#include "AIETargets.h"
namespace xilinx {
namespace AIE {


mlir::LogicalResult AIETranslateSCSimConfig(mlir::ModuleOp module, llvm::raw_ostream &output){
 return mlir::success();
}
mlir::LogicalResult AIETranslateShimSolution(mlir::ModuleOp module, llvm::raw_ostream &){
 return mlir::success();
}
mlir::LogicalResult AIETranslateGraphXPE(mlir::ModuleOp module, llvm::raw_ostream &){
     return mlir::success();
}

}
}