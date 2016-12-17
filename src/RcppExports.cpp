// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// isProb
bool isProb(double prob);
RcppExport SEXP markovchain_isProb(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type prob(probSEXP);
    __result = Rcpp::wrap(isProb(prob));
    return __result;
END_RCPP
}
// isGen
bool isGen(NumericMatrix gen);
RcppExport SEXP markovchain_isGen(SEXP genSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type gen(genSEXP);
    __result = Rcpp::wrap(isGen(gen));
    return __result;
END_RCPP
}
// canonicForm
SEXP canonicForm(S4 object);
RcppExport SEXP markovchain_canonicForm(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(canonicForm(object));
    return __result;
END_RCPP
}
// generatorToTransitionMatrix
NumericMatrix generatorToTransitionMatrix(NumericMatrix gen, bool byrow);
RcppExport SEXP markovchain_generatorToTransitionMatrix(SEXP genSEXP, SEXP byrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type gen(genSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    __result = Rcpp::wrap(generatorToTransitionMatrix(gen, byrow));
    return __result;
END_RCPP
}
// ctmcFit
List ctmcFit(List data, bool byrow, String name, double confidencelevel);
RcppExport SEXP markovchain_ctmcFit(SEXP dataSEXP, SEXP byrowSEXP, SEXP nameSEXP, SEXP confidencelevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< String >::type name(nameSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    __result = Rcpp::wrap(ctmcFit(data, byrow, name, confidencelevel));
    return __result;
END_RCPP
}
// seq2freqProb
NumericVector seq2freqProb(CharacterVector sequence);
RcppExport SEXP markovchain_seq2freqProb(SEXP sequenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type sequence(sequenceSEXP);
    __result = Rcpp::wrap(seq2freqProb(sequence));
    return __result;
END_RCPP
}
// seq2matHigh
NumericMatrix seq2matHigh(CharacterVector sequence, int order);
RcppExport SEXP markovchain_seq2matHigh(SEXP sequenceSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    __result = Rcpp::wrap(seq2matHigh(sequence, order));
    return __result;
END_RCPP
}
// markovchainSequenceRcpp
CharacterVector markovchainSequenceRcpp(int n, S4 markovchain, CharacterVector t0, bool include_t0);
RcppExport SEXP markovchain_markovchainSequenceRcpp(SEXP nSEXP, SEXP markovchainSEXP, SEXP t0SEXP, SEXP include_t0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< S4 >::type markovchain(markovchainSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< bool >::type include_t0(include_t0SEXP);
    __result = Rcpp::wrap(markovchainSequenceRcpp(n, markovchain, t0, include_t0));
    return __result;
END_RCPP
}
// markovchainListRcpp
List markovchainListRcpp(int n, List object, bool include_t0, CharacterVector t0);
RcppExport SEXP markovchain_markovchainListRcpp(SEXP nSEXP, SEXP objectSEXP, SEXP include_t0SEXP, SEXP t0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< List >::type object(objectSEXP);
    Rcpp::traits::input_parameter< bool >::type include_t0(include_t0SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t0(t0SEXP);
    __result = Rcpp::wrap(markovchainListRcpp(n, object, include_t0, t0));
    return __result;
END_RCPP
}
// markovchainSequenceParallelRcpp
List markovchainSequenceParallelRcpp(S4 listObject, int n, bool include_t0, CharacterVector init_state);
RcppExport SEXP markovchain_markovchainSequenceParallelRcpp(SEXP listObjectSEXP, SEXP nSEXP, SEXP include_t0SEXP, SEXP init_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type listObject(listObjectSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type include_t0(include_t0SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type init_state(init_stateSEXP);
    __result = Rcpp::wrap(markovchainSequenceParallelRcpp(listObject, n, include_t0, init_state));
    return __result;
END_RCPP
}
// createSequenceMatrix
NumericMatrix createSequenceMatrix(SEXP stringchar, bool toRowProbs, bool sanitize, CharacterVector possibleStates);
RcppExport SEXP markovchain_createSequenceMatrix(SEXP stringcharSEXP, SEXP toRowProbsSEXP, SEXP sanitizeSEXP, SEXP possibleStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type stringchar(stringcharSEXP);
    Rcpp::traits::input_parameter< bool >::type toRowProbs(toRowProbsSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type possibleStates(possibleStatesSEXP);
    __result = Rcpp::wrap(createSequenceMatrix(stringchar, toRowProbs, sanitize, possibleStates));
    return __result;
END_RCPP
}
// _matr2Mc
S4 _matr2Mc(CharacterMatrix matrData, double laplacian, bool sanitize);
RcppExport SEXP markovchain__matr2Mc(SEXP matrDataSEXP, SEXP laplacianSEXP, SEXP sanitizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type matrData(matrDataSEXP);
    Rcpp::traits::input_parameter< double >::type laplacian(laplacianSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    __result = Rcpp::wrap(_matr2Mc(matrData, laplacian, sanitize));
    return __result;
END_RCPP
}
// _list2Mc
S4 _list2Mc(List data, double laplacian, bool sanitize);
RcppExport SEXP markovchain__list2Mc(SEXP dataSEXP, SEXP laplacianSEXP, SEXP sanitizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type laplacian(laplacianSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    __result = Rcpp::wrap(_list2Mc(data, laplacian, sanitize));
    return __result;
END_RCPP
}
// inferHyperparam
List inferHyperparam(NumericMatrix transMatr, NumericVector scale, CharacterVector data);
RcppExport SEXP markovchain_inferHyperparam(SEXP transMatrSEXP, SEXP scaleSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMatr(transMatrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type data(dataSEXP);
    __result = Rcpp::wrap(inferHyperparam(transMatr, scale, data));
    return __result;
END_RCPP
}
// markovchainFit
List markovchainFit(SEXP data, String method, bool byrow, int nboot, double laplacian, String name, bool parallel, double confidencelevel, NumericMatrix hyperparam, bool sanitize, CharacterVector possibleStates);
RcppExport SEXP markovchain_markovchainFit(SEXP dataSEXP, SEXP methodSEXP, SEXP byrowSEXP, SEXP nbootSEXP, SEXP laplacianSEXP, SEXP nameSEXP, SEXP parallelSEXP, SEXP confidencelevelSEXP, SEXP hyperparamSEXP, SEXP sanitizeSEXP, SEXP possibleStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP);
    Rcpp::traits::input_parameter< double >::type laplacian(laplacianSEXP);
    Rcpp::traits::input_parameter< String >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type possibleStates(possibleStatesSEXP);
    __result = Rcpp::wrap(markovchainFit(data, method, byrow, nboot, laplacian, name, parallel, confidencelevel, hyperparam, sanitize, possibleStates));
    return __result;
END_RCPP
}
// commclassesKernel
SEXP commclassesKernel(NumericMatrix P);
RcppExport SEXP markovchain_commclassesKernel(SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    __result = Rcpp::wrap(commclassesKernel(P));
    return __result;
END_RCPP
}
// communicatingClasses
List communicatingClasses(S4 object);
RcppExport SEXP markovchain_communicatingClasses(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(communicatingClasses(object));
    return __result;
END_RCPP
}
// recurrentClasses
List recurrentClasses(S4 object);
RcppExport SEXP markovchain_recurrentClasses(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(recurrentClasses(object));
    return __result;
END_RCPP
}
// commStatesFinder
NumericMatrix commStatesFinder(NumericMatrix matr);
RcppExport SEXP markovchain_commStatesFinder(SEXP matrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type matr(matrSEXP);
    __result = Rcpp::wrap(commStatesFinder(matr));
    return __result;
END_RCPP
}
// summaryKernel
List summaryKernel(S4 object);
RcppExport SEXP markovchain_summaryKernel(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(summaryKernel(object));
    return __result;
END_RCPP
}
// firstpassageKernel
NumericMatrix firstpassageKernel(NumericMatrix P, int i, int n);
RcppExport SEXP markovchain_firstpassageKernel(SEXP PSEXP, SEXP iSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(firstpassageKernel(P, i, n));
    return __result;
END_RCPP
}
// gcd
int gcd(int a, int b);
RcppExport SEXP markovchain_gcd(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    __result = Rcpp::wrap(gcd(a, b));
    return __result;
END_RCPP
}
// period
int period(S4 object);
RcppExport SEXP markovchain_period(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(period(object));
    return __result;
END_RCPP
}
// predictiveDistribution
double predictiveDistribution(CharacterVector stringchar, CharacterVector newData, NumericMatrix hyperparam);
RcppExport SEXP markovchain_predictiveDistribution(SEXP stringcharSEXP, SEXP newDataSEXP, SEXP hyperparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type stringchar(stringcharSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type newData(newDataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    __result = Rcpp::wrap(predictiveDistribution(stringchar, newData, hyperparam));
    return __result;
END_RCPP
}
// priorDistribution
NumericVector priorDistribution(NumericMatrix transMatr, NumericMatrix hyperparam);
RcppExport SEXP markovchain_priorDistribution(SEXP transMatrSEXP, SEXP hyperparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMatr(transMatrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    __result = Rcpp::wrap(priorDistribution(transMatr, hyperparam));
    return __result;
END_RCPP
}
// multinomialCIForRow
NumericMatrix multinomialCIForRow(NumericVector x, double confidencelevel);
RcppExport SEXP markovchain_multinomialCIForRow(SEXP xSEXP, SEXP confidencelevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    __result = Rcpp::wrap(multinomialCIForRow(x, confidencelevel));
    return __result;
END_RCPP
}
// multinomCI
List multinomCI(NumericMatrix transMat, NumericMatrix seqMat, double confidencelevel);
RcppExport SEXP markovchain_multinomCI(SEXP transMatSEXP, SEXP seqMatSEXP, SEXP confidencelevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMat(transMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type seqMat(seqMatSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    __result = Rcpp::wrap(multinomCI(transMat, seqMat, confidencelevel));
    return __result;
END_RCPP
}
