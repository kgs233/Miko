
// Generated from MikoParserRules.g4 by ANTLR 4.13.2


#include "MikoParserRulesVisitor.h"

#include "MikoParserRules.h"


using namespace antlrcpp;
using namespace Miko;

using namespace antlr4;

namespace {

struct MikoParserRulesStaticData final {
  MikoParserRulesStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MikoParserRulesStaticData(const MikoParserRulesStaticData&) = delete;
  MikoParserRulesStaticData(MikoParserRulesStaticData&&) = delete;
  MikoParserRulesStaticData& operator=(const MikoParserRulesStaticData&) = delete;
  MikoParserRulesStaticData& operator=(MikoParserRulesStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mikoparserrulesParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MikoParserRulesStaticData> mikoparserrulesParserStaticData = nullptr;

void mikoparserrulesParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mikoparserrulesParserStaticData != nullptr) {
    return;
  }
#else
  assert(mikoparserrulesParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MikoParserRulesStaticData>(
    std::vector<std::string>{
      "prog", "statement", "ifStatement", "matchStatement", "matchMember", 
      "forStatement", "whileStatement", "returnStatement", "openStatement", 
      "accessKeyword", "defineKeyword", "defineStatement", "defineExpression", 
      "defineType", "externCall", "structType", "structMember", "defineEnum", 
      "enumMember", "extendObject", "compilerCall", "call", "functionArgs", 
      "atomExpression", "expression", "openExpression", "assignmentOperator", 
      "lambdaExpression", "lambdaHead", "lambdaBody", "codeBlock", "returncodeBlock"
    },
    std::vector<std::string>{
      "", "'var'", "'const'", "'define'", "'open'", "'this'", "'public'", 
      "'private'", "'local'", "'enum'", "'struct'", "'static'", "'if'", 
      "'else'", "'match'", "'for'", "'foreach'", "'while'", "'break'", "'next'", 
      "'return'", "'call'", "", "", "", "", "", "'.'", "';'", "':'", "','", 
      "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'", "'>'", "'>='", 
      "'<'", "'<='", "'=='", "'!='", "'&'", "'|'", "'^'", "'~'", "'<<'", 
      "'>>'", "'++'", "'--'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", 
      "'^='", "'|='", "'@'", "'\\'"
    },
    std::vector<std::string>{
      "", "VAR", "CONST", "DEFINE", "OPEN", "THIS", "PUBLIC", "PRIVATE", 
      "LOCAL", "ENUM", "STRUCT", "STATIC", "IF", "ELSE", "MATCH", "FOR", 
      "FOREACH", "WHILE", "BREAK", "NEXT", "RETURN", "CALL", "ID", "INT", 
      "CHAR", "FLOAT", "STRING", "DOT", "SEMIC", "COLON", "COMMA", "ADD", 
      "MIN", "MUL", "DIV", "MOD", "AND", "OR", "NOT", "BIG", "BIG_EQ", "SMALL", 
      "SMALL_EQ", "DOB_EQ", "NOT_EQ", "BITAND", "BITOR", "BITXOR", "BITNOT", 
      "LSHIFT", "RSHIFT", "DADD", "DMIN", "LPAREN", "RPAREN", "LBRACE", 
      "RBRACE", "LBRACK", "RBRACK", "ASS", "MUL_ASS", "DIV_ASS", "MOD_ASS", 
      "ADD_ASS", "MIN_ASS", "LSHIFT_ASS", "RSHIFT_ASS", "BITAND_ASS", "BITXOR_ASS", 
      "BITOR_ASS", "COMPILER", "LAMBDA", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,72,441,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,5,0,67,8,0,10,0,12,0,70,9,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,85,8,1,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,93,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,101,8,2,1,2,
  	1,2,1,2,3,2,106,8,2,3,2,108,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,117,8,
  	3,10,3,12,3,120,9,3,1,3,1,3,1,3,1,3,3,3,126,8,3,1,4,1,4,1,4,1,4,3,4,132,
  	8,4,1,5,1,5,1,5,1,5,1,5,5,5,139,8,5,10,5,12,5,142,9,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,3,5,151,8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,159,8,6,1,7,1,7,3,
  	7,163,8,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,
  	11,5,11,179,8,11,10,11,12,11,182,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,
  	12,3,12,191,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,5,
  	13,203,8,13,10,13,12,13,206,9,13,1,13,1,13,1,13,1,13,1,13,1,13,5,13,214,
  	8,13,10,13,12,13,217,9,13,1,13,1,13,3,13,221,8,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,235,8,14,10,14,12,14,238,
  	9,14,1,14,3,14,241,8,14,1,15,1,15,3,15,245,8,15,1,15,1,15,1,15,5,15,250,
  	8,15,10,15,12,15,253,9,15,1,15,1,15,1,16,3,16,258,8,16,1,16,3,16,261,
  	8,16,1,16,1,16,1,17,1,17,3,17,267,8,17,1,17,1,17,1,17,1,17,5,17,273,8,
  	17,10,17,12,17,276,9,17,1,17,1,17,1,18,1,18,1,18,1,18,3,18,284,8,18,1,
  	19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,298,8,
  	20,1,21,1,21,1,21,5,21,303,8,21,10,21,12,21,306,9,21,1,21,1,21,1,21,1,
  	21,1,21,3,21,313,8,21,1,22,1,22,1,22,5,22,318,8,22,10,22,12,22,321,9,
  	22,1,23,1,23,1,23,1,23,1,23,3,23,328,8,23,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,3,24,350,8,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,5,
  	24,390,8,24,10,24,12,24,393,9,24,1,25,1,25,1,25,1,25,5,25,399,8,25,10,
  	25,12,25,402,9,25,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,
  	28,5,28,415,8,28,10,28,12,28,418,9,28,1,28,1,28,1,29,1,29,1,29,1,29,3,
  	29,426,8,29,1,30,1,30,1,30,5,30,431,8,30,10,30,12,30,434,9,30,1,30,1,
  	30,1,31,1,31,1,31,1,31,0,1,48,32,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,0,8,1,0,6,7,1,0,
  	1,3,1,0,33,35,1,0,31,32,1,0,49,50,1,0,39,42,1,0,43,44,1,0,59,69,488,0,
  	68,1,0,0,0,2,84,1,0,0,0,4,107,1,0,0,0,6,109,1,0,0,0,8,127,1,0,0,0,10,
  	133,1,0,0,0,12,152,1,0,0,0,14,160,1,0,0,0,16,166,1,0,0,0,18,170,1,0,0,
  	0,20,172,1,0,0,0,22,174,1,0,0,0,24,185,1,0,0,0,26,220,1,0,0,0,28,240,
  	1,0,0,0,30,242,1,0,0,0,32,257,1,0,0,0,34,264,1,0,0,0,36,283,1,0,0,0,38,
  	285,1,0,0,0,40,297,1,0,0,0,42,312,1,0,0,0,44,314,1,0,0,0,46,327,1,0,0,
  	0,48,349,1,0,0,0,50,394,1,0,0,0,52,403,1,0,0,0,54,405,1,0,0,0,56,409,
  	1,0,0,0,58,425,1,0,0,0,60,427,1,0,0,0,62,437,1,0,0,0,64,67,3,16,8,0,65,
  	67,3,32,16,0,66,64,1,0,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,
  	68,69,1,0,0,0,69,1,1,0,0,0,70,68,1,0,0,0,71,85,5,28,0,0,72,73,3,48,24,
  	0,73,74,5,28,0,0,74,85,1,0,0,0,75,76,3,22,11,0,76,77,5,28,0,0,77,85,1,
  	0,0,0,78,85,3,4,2,0,79,85,3,6,3,0,80,85,3,10,5,0,81,85,3,12,6,0,82,85,
  	3,14,7,0,83,85,3,16,8,0,84,71,1,0,0,0,84,72,1,0,0,0,84,75,1,0,0,0,84,
  	78,1,0,0,0,84,79,1,0,0,0,84,80,1,0,0,0,84,81,1,0,0,0,84,82,1,0,0,0,84,
  	83,1,0,0,0,85,3,1,0,0,0,86,87,5,12,0,0,87,88,5,53,0,0,88,89,3,48,24,0,
  	89,92,5,54,0,0,90,93,3,60,30,0,91,93,3,2,1,0,92,90,1,0,0,0,92,91,1,0,
  	0,0,93,108,1,0,0,0,94,95,5,12,0,0,95,96,5,53,0,0,96,97,3,48,24,0,97,100,
  	5,54,0,0,98,101,3,60,30,0,99,101,3,2,1,0,100,98,1,0,0,0,100,99,1,0,0,
  	0,101,102,1,0,0,0,102,105,5,13,0,0,103,106,3,60,30,0,104,106,3,2,1,0,
  	105,103,1,0,0,0,105,104,1,0,0,0,106,108,1,0,0,0,107,86,1,0,0,0,107,94,
  	1,0,0,0,108,5,1,0,0,0,109,110,5,14,0,0,110,111,5,53,0,0,111,112,3,48,
  	24,0,112,113,5,54,0,0,113,114,5,55,0,0,114,118,3,8,4,0,115,117,3,8,4,
  	0,116,115,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,
  	121,1,0,0,0,120,118,1,0,0,0,121,122,5,56,0,0,122,125,5,13,0,0,123,126,
  	3,60,30,0,124,126,3,2,1,0,125,123,1,0,0,0,125,124,1,0,0,0,126,7,1,0,0,
  	0,127,128,3,48,24,0,128,131,5,29,0,0,129,132,3,60,30,0,130,132,3,2,1,
  	0,131,129,1,0,0,0,131,130,1,0,0,0,132,9,1,0,0,0,133,134,5,15,0,0,134,
  	135,5,53,0,0,135,140,3,24,12,0,136,137,5,30,0,0,137,139,3,48,24,0,138,
  	136,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,143,1,
  	0,0,0,142,140,1,0,0,0,143,144,5,28,0,0,144,145,3,48,24,0,145,146,5,28,
  	0,0,146,147,3,48,24,0,147,150,5,54,0,0,148,151,3,60,30,0,149,151,3,2,
  	1,0,150,148,1,0,0,0,150,149,1,0,0,0,151,11,1,0,0,0,152,153,5,17,0,0,153,
  	154,5,53,0,0,154,155,3,48,24,0,155,158,5,54,0,0,156,159,3,60,30,0,157,
  	159,3,2,1,0,158,156,1,0,0,0,158,157,1,0,0,0,159,13,1,0,0,0,160,162,5,
  	20,0,0,161,163,3,48,24,0,162,161,1,0,0,0,162,163,1,0,0,0,163,164,1,0,
  	0,0,164,165,5,28,0,0,165,15,1,0,0,0,166,167,5,4,0,0,167,168,3,48,24,0,
  	168,169,5,28,0,0,169,17,1,0,0,0,170,171,7,0,0,0,171,19,1,0,0,0,172,173,
  	7,1,0,0,173,21,1,0,0,0,174,175,3,20,10,0,175,180,3,24,12,0,176,177,5,
  	30,0,0,177,179,3,24,12,0,178,176,1,0,0,0,179,182,1,0,0,0,180,178,1,0,
  	0,0,180,181,1,0,0,0,181,183,1,0,0,0,182,180,1,0,0,0,183,184,5,28,0,0,
  	184,23,1,0,0,0,185,186,5,22,0,0,186,187,5,29,0,0,187,190,3,26,13,0,188,
  	189,5,59,0,0,189,191,3,48,24,0,190,188,1,0,0,0,190,191,1,0,0,0,191,25,
  	1,0,0,0,192,221,3,40,20,0,193,221,3,42,21,0,194,221,3,34,17,0,195,221,
  	3,30,15,0,196,221,3,34,17,0,197,221,3,54,27,0,198,199,5,53,0,0,199,204,
  	3,26,13,0,200,201,5,46,0,0,201,203,3,26,13,0,202,200,1,0,0,0,203,206,
  	1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,207,1,0,0,0,206,204,1,0,0,
  	0,207,208,5,54,0,0,208,221,1,0,0,0,209,210,5,53,0,0,210,215,3,26,13,0,
  	211,212,5,30,0,0,212,214,3,26,13,0,213,211,1,0,0,0,214,217,1,0,0,0,215,
  	213,1,0,0,0,215,216,1,0,0,0,216,218,1,0,0,0,217,215,1,0,0,0,218,219,5,
  	54,0,0,219,221,1,0,0,0,220,192,1,0,0,0,220,193,1,0,0,0,220,194,1,0,0,
  	0,220,195,1,0,0,0,220,196,1,0,0,0,220,197,1,0,0,0,220,198,1,0,0,0,220,
  	209,1,0,0,0,221,27,1,0,0,0,222,223,5,21,0,0,223,241,5,22,0,0,224,225,
  	5,21,0,0,225,226,5,22,0,0,226,227,5,53,0,0,227,228,3,44,22,0,228,229,
  	5,54,0,0,229,241,1,0,0,0,230,231,5,21,0,0,231,232,5,10,0,0,232,236,5,
  	55,0,0,233,235,3,32,16,0,234,233,1,0,0,0,235,238,1,0,0,0,236,234,1,0,
  	0,0,236,237,1,0,0,0,237,239,1,0,0,0,238,236,1,0,0,0,239,241,5,56,0,0,
  	240,222,1,0,0,0,240,224,1,0,0,0,240,230,1,0,0,0,241,29,1,0,0,0,242,244,
  	5,10,0,0,243,245,3,38,19,0,244,243,1,0,0,0,244,245,1,0,0,0,245,246,1,
  	0,0,0,246,251,5,55,0,0,247,250,3,16,8,0,248,250,3,32,16,0,249,247,1,0,
  	0,0,249,248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,
  	254,1,0,0,0,253,251,1,0,0,0,254,255,5,56,0,0,255,31,1,0,0,0,256,258,3,
  	18,9,0,257,256,1,0,0,0,257,258,1,0,0,0,258,260,1,0,0,0,259,261,5,11,0,
  	0,260,259,1,0,0,0,260,261,1,0,0,0,261,262,1,0,0,0,262,263,3,22,11,0,263,
  	33,1,0,0,0,264,266,5,9,0,0,265,267,3,38,19,0,266,265,1,0,0,0,266,267,
  	1,0,0,0,267,268,1,0,0,0,268,269,5,55,0,0,269,274,3,36,18,0,270,271,5,
  	30,0,0,271,273,3,36,18,0,272,270,1,0,0,0,273,276,1,0,0,0,274,272,1,0,
  	0,0,274,275,1,0,0,0,275,277,1,0,0,0,276,274,1,0,0,0,277,278,5,56,0,0,
  	278,35,1,0,0,0,279,284,5,22,0,0,280,281,5,22,0,0,281,282,5,59,0,0,282,
  	284,3,48,24,0,283,279,1,0,0,0,283,280,1,0,0,0,284,37,1,0,0,0,285,286,
  	5,53,0,0,286,287,3,42,21,0,287,288,5,54,0,0,288,39,1,0,0,0,289,290,5,
  	70,0,0,290,298,5,22,0,0,291,292,5,70,0,0,292,293,5,22,0,0,293,294,5,53,
  	0,0,294,295,3,44,22,0,295,296,5,54,0,0,296,298,1,0,0,0,297,289,1,0,0,
  	0,297,291,1,0,0,0,298,41,1,0,0,0,299,304,5,22,0,0,300,301,5,27,0,0,301,
  	303,5,22,0,0,302,300,1,0,0,0,303,306,1,0,0,0,304,302,1,0,0,0,304,305,
  	1,0,0,0,305,313,1,0,0,0,306,304,1,0,0,0,307,308,5,22,0,0,308,309,5,53,
  	0,0,309,310,3,44,22,0,310,311,5,54,0,0,311,313,1,0,0,0,312,299,1,0,0,
  	0,312,307,1,0,0,0,313,43,1,0,0,0,314,319,3,48,24,0,315,316,5,30,0,0,316,
  	318,3,48,24,0,317,315,1,0,0,0,318,321,1,0,0,0,319,317,1,0,0,0,319,320,
  	1,0,0,0,320,45,1,0,0,0,321,319,1,0,0,0,322,328,3,42,21,0,323,328,5,23,
  	0,0,324,328,5,25,0,0,325,328,5,24,0,0,326,328,5,26,0,0,327,322,1,0,0,
  	0,327,323,1,0,0,0,327,324,1,0,0,0,327,325,1,0,0,0,327,326,1,0,0,0,328,
  	47,1,0,0,0,329,330,6,24,-1,0,330,350,3,42,21,0,331,332,5,53,0,0,332,333,
  	3,48,24,0,333,334,5,54,0,0,334,350,1,0,0,0,335,336,5,30,0,0,336,350,3,
  	48,24,22,337,338,5,27,0,0,338,350,3,48,24,21,339,340,5,32,0,0,340,350,
  	3,48,24,20,341,342,5,48,0,0,342,350,3,48,24,19,343,344,5,38,0,0,344,350,
  	3,48,24,18,345,350,5,5,0,0,346,350,3,50,25,0,347,350,3,54,27,0,348,350,
  	3,46,23,0,349,329,1,0,0,0,349,331,1,0,0,0,349,335,1,0,0,0,349,337,1,0,
  	0,0,349,339,1,0,0,0,349,341,1,0,0,0,349,343,1,0,0,0,349,345,1,0,0,0,349,
  	346,1,0,0,0,349,347,1,0,0,0,349,348,1,0,0,0,350,391,1,0,0,0,351,352,10,
  	15,0,0,352,353,7,2,0,0,353,390,3,48,24,16,354,355,10,14,0,0,355,356,7,
  	3,0,0,356,390,3,48,24,15,357,358,10,13,0,0,358,359,7,4,0,0,359,390,3,
  	48,24,14,360,361,10,12,0,0,361,362,7,5,0,0,362,390,3,48,24,13,363,364,
  	10,11,0,0,364,365,7,6,0,0,365,390,3,48,24,12,366,367,10,10,0,0,367,368,
  	5,45,0,0,368,390,3,48,24,11,369,370,10,9,0,0,370,371,5,47,0,0,371,390,
  	3,48,24,10,372,373,10,8,0,0,373,374,5,46,0,0,374,390,3,48,24,9,375,376,
  	10,7,0,0,376,377,5,36,0,0,377,390,3,48,24,8,378,379,10,6,0,0,379,380,
  	5,37,0,0,380,390,3,48,24,7,381,382,10,5,0,0,382,383,3,52,26,0,383,384,
  	3,48,24,6,384,390,1,0,0,0,385,386,10,17,0,0,386,390,5,51,0,0,387,388,
  	10,16,0,0,388,390,5,52,0,0,389,351,1,0,0,0,389,354,1,0,0,0,389,357,1,
  	0,0,0,389,360,1,0,0,0,389,363,1,0,0,0,389,366,1,0,0,0,389,369,1,0,0,0,
  	389,372,1,0,0,0,389,375,1,0,0,0,389,378,1,0,0,0,389,381,1,0,0,0,389,385,
  	1,0,0,0,389,387,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,
  	0,392,49,1,0,0,0,393,391,1,0,0,0,394,395,5,4,0,0,395,400,5,22,0,0,396,
  	397,5,27,0,0,397,399,5,22,0,0,398,396,1,0,0,0,399,402,1,0,0,0,400,398,
  	1,0,0,0,400,401,1,0,0,0,401,51,1,0,0,0,402,400,1,0,0,0,403,404,7,7,0,
  	0,404,53,1,0,0,0,405,406,3,56,28,0,406,407,5,27,0,0,407,408,3,58,29,0,
  	408,55,1,0,0,0,409,410,5,71,0,0,410,411,5,53,0,0,411,416,3,24,12,0,412,
  	413,5,30,0,0,413,415,3,24,12,0,414,412,1,0,0,0,415,418,1,0,0,0,416,414,
  	1,0,0,0,416,417,1,0,0,0,417,419,1,0,0,0,418,416,1,0,0,0,419,420,5,54,
  	0,0,420,57,1,0,0,0,421,426,3,60,30,0,422,426,3,62,31,0,423,426,3,2,1,
  	0,424,426,3,48,24,0,425,421,1,0,0,0,425,422,1,0,0,0,425,423,1,0,0,0,425,
  	424,1,0,0,0,426,59,1,0,0,0,427,428,5,55,0,0,428,432,3,2,1,0,429,431,3,
  	2,1,0,430,429,1,0,0,0,431,434,1,0,0,0,432,430,1,0,0,0,432,433,1,0,0,0,
  	433,435,1,0,0,0,434,432,1,0,0,0,435,436,5,56,0,0,436,61,1,0,0,0,437,438,
  	3,26,13,0,438,439,3,60,30,0,439,63,1,0,0,0,41,66,68,84,92,100,105,107,
  	118,125,131,140,150,158,162,180,190,204,215,220,236,240,244,249,251,257,
  	260,266,274,283,297,304,312,319,327,349,389,391,400,416,425,432
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mikoparserrulesParserStaticData = std::move(staticData);
}

}

MikoParserRules::MikoParserRules(TokenStream *input) : MikoParserRules(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MikoParserRules::MikoParserRules(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MikoParserRules::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mikoparserrulesParserStaticData->atn, mikoparserrulesParserStaticData->decisionToDFA, mikoparserrulesParserStaticData->sharedContextCache, options);
}

MikoParserRules::~MikoParserRules() {
  delete _interpreter;
}

const atn::ATN& MikoParserRules::getATN() const {
  return *mikoparserrulesParserStaticData->atn;
}

std::string MikoParserRules::getGrammarFileName() const {
  return "MikoParserRules.g4";
}

const std::vector<std::string>& MikoParserRules::getRuleNames() const {
  return mikoparserrulesParserStaticData->ruleNames;
}

const dfa::Vocabulary& MikoParserRules::getVocabulary() const {
  return mikoparserrulesParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MikoParserRules::getSerializedATN() const {
  return mikoparserrulesParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

MikoParserRules::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MikoParserRules::OpenStatementContext *> MikoParserRules::ProgContext::openStatement() {
  return getRuleContexts<MikoParserRules::OpenStatementContext>();
}

MikoParserRules::OpenStatementContext* MikoParserRules::ProgContext::openStatement(size_t i) {
  return getRuleContext<MikoParserRules::OpenStatementContext>(i);
}

std::vector<MikoParserRules::StructMemberContext *> MikoParserRules::ProgContext::structMember() {
  return getRuleContexts<MikoParserRules::StructMemberContext>();
}

MikoParserRules::StructMemberContext* MikoParserRules::ProgContext::structMember(size_t i) {
  return getRuleContext<MikoParserRules::StructMemberContext>(i);
}


size_t MikoParserRules::ProgContext::getRuleIndex() const {
  return MikoParserRules::RuleProg;
}


std::any MikoParserRules::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ProgContext* MikoParserRules::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MikoParserRules::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2270) != 0)) {
      setState(66);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::OPEN: {
          setState(64);
          openStatement();
          break;
        }

        case MikoParserRules::VAR:
        case MikoParserRules::CONST:
        case MikoParserRules::DEFINE:
        case MikoParserRules::PUBLIC:
        case MikoParserRules::PRIVATE:
        case MikoParserRules::STATIC: {
          setState(65);
          structMember();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MikoParserRules::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::StatementContext::SEMIC() {
  return getToken(MikoParserRules::SEMIC, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::StatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::DefineStatementContext* MikoParserRules::StatementContext::defineStatement() {
  return getRuleContext<MikoParserRules::DefineStatementContext>(0);
}

MikoParserRules::IfStatementContext* MikoParserRules::StatementContext::ifStatement() {
  return getRuleContext<MikoParserRules::IfStatementContext>(0);
}

MikoParserRules::MatchStatementContext* MikoParserRules::StatementContext::matchStatement() {
  return getRuleContext<MikoParserRules::MatchStatementContext>(0);
}

MikoParserRules::ForStatementContext* MikoParserRules::StatementContext::forStatement() {
  return getRuleContext<MikoParserRules::ForStatementContext>(0);
}

MikoParserRules::WhileStatementContext* MikoParserRules::StatementContext::whileStatement() {
  return getRuleContext<MikoParserRules::WhileStatementContext>(0);
}

MikoParserRules::ReturnStatementContext* MikoParserRules::StatementContext::returnStatement() {
  return getRuleContext<MikoParserRules::ReturnStatementContext>(0);
}

MikoParserRules::OpenStatementContext* MikoParserRules::StatementContext::openStatement() {
  return getRuleContext<MikoParserRules::OpenStatementContext>(0);
}


size_t MikoParserRules::StatementContext::getRuleIndex() const {
  return MikoParserRules::RuleStatement;
}


std::any MikoParserRules::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::StatementContext* MikoParserRules::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, MikoParserRules::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(72);
      expression(0);
      setState(73);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(75);
      defineStatement();
      setState(76);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(78);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(79);
      matchStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(80);
      forStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(81);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(82);
      returnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(83);
      openStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

MikoParserRules::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::IfStatementContext::IF() {
  return getToken(MikoParserRules::IF, 0);
}

tree::TerminalNode* MikoParserRules::IfStatementContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::IfStatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::IfStatementContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

std::vector<MikoParserRules::CodeBlockContext *> MikoParserRules::IfStatementContext::codeBlock() {
  return getRuleContexts<MikoParserRules::CodeBlockContext>();
}

MikoParserRules::CodeBlockContext* MikoParserRules::IfStatementContext::codeBlock(size_t i) {
  return getRuleContext<MikoParserRules::CodeBlockContext>(i);
}

std::vector<MikoParserRules::StatementContext *> MikoParserRules::IfStatementContext::statement() {
  return getRuleContexts<MikoParserRules::StatementContext>();
}

MikoParserRules::StatementContext* MikoParserRules::IfStatementContext::statement(size_t i) {
  return getRuleContext<MikoParserRules::StatementContext>(i);
}

tree::TerminalNode* MikoParserRules::IfStatementContext::ELSE() {
  return getToken(MikoParserRules::ELSE, 0);
}


size_t MikoParserRules::IfStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleIfStatement;
}


std::any MikoParserRules::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::IfStatementContext* MikoParserRules::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, MikoParserRules::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(MikoParserRules::IF);
      setState(87);
      match(MikoParserRules::LPAREN);
      setState(88);
      expression(0);
      setState(89);
      match(MikoParserRules::RPAREN);
      setState(92);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(90);
          codeBlock();
          break;
        }

        case MikoParserRules::VAR:
        case MikoParserRules::CONST:
        case MikoParserRules::DEFINE:
        case MikoParserRules::OPEN:
        case MikoParserRules::THIS:
        case MikoParserRules::IF:
        case MikoParserRules::MATCH:
        case MikoParserRules::FOR:
        case MikoParserRules::WHILE:
        case MikoParserRules::RETURN:
        case MikoParserRules::ID:
        case MikoParserRules::INT:
        case MikoParserRules::CHAR:
        case MikoParserRules::FLOAT:
        case MikoParserRules::STRING:
        case MikoParserRules::DOT:
        case MikoParserRules::SEMIC:
        case MikoParserRules::COMMA:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(91);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      match(MikoParserRules::IF);
      setState(95);
      match(MikoParserRules::LPAREN);
      setState(96);
      expression(0);
      setState(97);
      match(MikoParserRules::RPAREN);
      setState(100);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(98);
          codeBlock();
          break;
        }

        case MikoParserRules::VAR:
        case MikoParserRules::CONST:
        case MikoParserRules::DEFINE:
        case MikoParserRules::OPEN:
        case MikoParserRules::THIS:
        case MikoParserRules::IF:
        case MikoParserRules::MATCH:
        case MikoParserRules::FOR:
        case MikoParserRules::WHILE:
        case MikoParserRules::RETURN:
        case MikoParserRules::ID:
        case MikoParserRules::INT:
        case MikoParserRules::CHAR:
        case MikoParserRules::FLOAT:
        case MikoParserRules::STRING:
        case MikoParserRules::DOT:
        case MikoParserRules::SEMIC:
        case MikoParserRules::COMMA:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(99);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(102);
      match(MikoParserRules::ELSE);
      setState(105);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(103);
          codeBlock();
          break;
        }

        case MikoParserRules::VAR:
        case MikoParserRules::CONST:
        case MikoParserRules::DEFINE:
        case MikoParserRules::OPEN:
        case MikoParserRules::THIS:
        case MikoParserRules::IF:
        case MikoParserRules::MATCH:
        case MikoParserRules::FOR:
        case MikoParserRules::WHILE:
        case MikoParserRules::RETURN:
        case MikoParserRules::ID:
        case MikoParserRules::INT:
        case MikoParserRules::CHAR:
        case MikoParserRules::FLOAT:
        case MikoParserRules::STRING:
        case MikoParserRules::DOT:
        case MikoParserRules::SEMIC:
        case MikoParserRules::COMMA:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(104);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchStatementContext ------------------------------------------------------------------

MikoParserRules::MatchStatementContext::MatchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::MATCH() {
  return getToken(MikoParserRules::MATCH, 0);
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::MatchStatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::LBRACE() {
  return getToken(MikoParserRules::LBRACE, 0);
}

std::vector<MikoParserRules::MatchMemberContext *> MikoParserRules::MatchStatementContext::matchMember() {
  return getRuleContexts<MikoParserRules::MatchMemberContext>();
}

MikoParserRules::MatchMemberContext* MikoParserRules::MatchStatementContext::matchMember(size_t i) {
  return getRuleContext<MikoParserRules::MatchMemberContext>(i);
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

tree::TerminalNode* MikoParserRules::MatchStatementContext::ELSE() {
  return getToken(MikoParserRules::ELSE, 0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::MatchStatementContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}

MikoParserRules::StatementContext* MikoParserRules::MatchStatementContext::statement() {
  return getRuleContext<MikoParserRules::StatementContext>(0);
}


size_t MikoParserRules::MatchStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleMatchStatement;
}


std::any MikoParserRules::MatchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitMatchStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::MatchStatementContext* MikoParserRules::matchStatement() {
  MatchStatementContext *_localctx = _tracker.createInstance<MatchStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, MikoParserRules::RuleMatchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(MikoParserRules::MATCH);
    setState(110);
    match(MikoParserRules::LPAREN);
    setState(111);
    expression(0);
    setState(112);
    match(MikoParserRules::RPAREN);
    setState(113);
    match(MikoParserRules::LBRACE);
    setState(114);
    matchMember();
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9288954742308912) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(115);
      matchMember();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(121);
    match(MikoParserRules::RBRACE);
    setState(122);
    match(MikoParserRules::ELSE);
    setState(125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(123);
        codeBlock();
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE:
      case MikoParserRules::OPEN:
      case MikoParserRules::THIS:
      case MikoParserRules::IF:
      case MikoParserRules::MATCH:
      case MikoParserRules::FOR:
      case MikoParserRules::WHILE:
      case MikoParserRules::RETURN:
      case MikoParserRules::ID:
      case MikoParserRules::INT:
      case MikoParserRules::CHAR:
      case MikoParserRules::FLOAT:
      case MikoParserRules::STRING:
      case MikoParserRules::DOT:
      case MikoParserRules::SEMIC:
      case MikoParserRules::COMMA:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(124);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchMemberContext ------------------------------------------------------------------

MikoParserRules::MatchMemberContext::MatchMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::ExpressionContext* MikoParserRules::MatchMemberContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::MatchMemberContext::COLON() {
  return getToken(MikoParserRules::COLON, 0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::MatchMemberContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}

MikoParserRules::StatementContext* MikoParserRules::MatchMemberContext::statement() {
  return getRuleContext<MikoParserRules::StatementContext>(0);
}


size_t MikoParserRules::MatchMemberContext::getRuleIndex() const {
  return MikoParserRules::RuleMatchMember;
}


std::any MikoParserRules::MatchMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitMatchMember(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::MatchMemberContext* MikoParserRules::matchMember() {
  MatchMemberContext *_localctx = _tracker.createInstance<MatchMemberContext>(_ctx, getState());
  enterRule(_localctx, 8, MikoParserRules::RuleMatchMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    expression(0);
    setState(128);
    match(MikoParserRules::COLON);
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(129);
        codeBlock();
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE:
      case MikoParserRules::OPEN:
      case MikoParserRules::THIS:
      case MikoParserRules::IF:
      case MikoParserRules::MATCH:
      case MikoParserRules::FOR:
      case MikoParserRules::WHILE:
      case MikoParserRules::RETURN:
      case MikoParserRules::ID:
      case MikoParserRules::INT:
      case MikoParserRules::CHAR:
      case MikoParserRules::FLOAT:
      case MikoParserRules::STRING:
      case MikoParserRules::DOT:
      case MikoParserRules::SEMIC:
      case MikoParserRules::COMMA:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(130);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

MikoParserRules::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::ForStatementContext::FOR() {
  return getToken(MikoParserRules::FOR, 0);
}

tree::TerminalNode* MikoParserRules::ForStatementContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::DefineExpressionContext* MikoParserRules::ForStatementContext::defineExpression() {
  return getRuleContext<MikoParserRules::DefineExpressionContext>(0);
}

std::vector<tree::TerminalNode *> MikoParserRules::ForStatementContext::SEMIC() {
  return getTokens(MikoParserRules::SEMIC);
}

tree::TerminalNode* MikoParserRules::ForStatementContext::SEMIC(size_t i) {
  return getToken(MikoParserRules::SEMIC, i);
}

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::ForStatementContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::ForStatementContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::ForStatementContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::ForStatementContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}

MikoParserRules::StatementContext* MikoParserRules::ForStatementContext::statement() {
  return getRuleContext<MikoParserRules::StatementContext>(0);
}

std::vector<tree::TerminalNode *> MikoParserRules::ForStatementContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::ForStatementContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::ForStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleForStatement;
}


std::any MikoParserRules::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ForStatementContext* MikoParserRules::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, MikoParserRules::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(MikoParserRules::FOR);
    setState(134);
    match(MikoParserRules::LPAREN);
    setState(135);
    defineExpression();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(136);
      match(MikoParserRules::COMMA);
      setState(137);
      expression(0);
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(MikoParserRules::SEMIC);
    setState(144);
    expression(0);
    setState(145);
    match(MikoParserRules::SEMIC);
    setState(146);
    expression(0);
    setState(147);
    match(MikoParserRules::RPAREN);
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(148);
        codeBlock();
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE:
      case MikoParserRules::OPEN:
      case MikoParserRules::THIS:
      case MikoParserRules::IF:
      case MikoParserRules::MATCH:
      case MikoParserRules::FOR:
      case MikoParserRules::WHILE:
      case MikoParserRules::RETURN:
      case MikoParserRules::ID:
      case MikoParserRules::INT:
      case MikoParserRules::CHAR:
      case MikoParserRules::FLOAT:
      case MikoParserRules::STRING:
      case MikoParserRules::DOT:
      case MikoParserRules::SEMIC:
      case MikoParserRules::COMMA:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(149);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

MikoParserRules::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::WhileStatementContext::WHILE() {
  return getToken(MikoParserRules::WHILE, 0);
}

tree::TerminalNode* MikoParserRules::WhileStatementContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::WhileStatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::WhileStatementContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::WhileStatementContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}

MikoParserRules::StatementContext* MikoParserRules::WhileStatementContext::statement() {
  return getRuleContext<MikoParserRules::StatementContext>(0);
}


size_t MikoParserRules::WhileStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleWhileStatement;
}


std::any MikoParserRules::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::WhileStatementContext* MikoParserRules::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, MikoParserRules::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(MikoParserRules::WHILE);
    setState(153);
    match(MikoParserRules::LPAREN);
    setState(154);
    expression(0);
    setState(155);
    match(MikoParserRules::RPAREN);
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(156);
        codeBlock();
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE:
      case MikoParserRules::OPEN:
      case MikoParserRules::THIS:
      case MikoParserRules::IF:
      case MikoParserRules::MATCH:
      case MikoParserRules::FOR:
      case MikoParserRules::WHILE:
      case MikoParserRules::RETURN:
      case MikoParserRules::ID:
      case MikoParserRules::INT:
      case MikoParserRules::CHAR:
      case MikoParserRules::FLOAT:
      case MikoParserRules::STRING:
      case MikoParserRules::DOT:
      case MikoParserRules::SEMIC:
      case MikoParserRules::COMMA:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(157);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

MikoParserRules::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::ReturnStatementContext::RETURN() {
  return getToken(MikoParserRules::RETURN, 0);
}

tree::TerminalNode* MikoParserRules::ReturnStatementContext::SEMIC() {
  return getToken(MikoParserRules::SEMIC, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::ReturnStatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}


size_t MikoParserRules::ReturnStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleReturnStatement;
}


std::any MikoParserRules::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ReturnStatementContext* MikoParserRules::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, MikoParserRules::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(MikoParserRules::RETURN);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9288954742308912) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(161);
      expression(0);
    }
    setState(164);
    match(MikoParserRules::SEMIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpenStatementContext ------------------------------------------------------------------

MikoParserRules::OpenStatementContext::OpenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::OpenStatementContext::OPEN() {
  return getToken(MikoParserRules::OPEN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::OpenStatementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::OpenStatementContext::SEMIC() {
  return getToken(MikoParserRules::SEMIC, 0);
}


size_t MikoParserRules::OpenStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleOpenStatement;
}


std::any MikoParserRules::OpenStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitOpenStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::OpenStatementContext* MikoParserRules::openStatement() {
  OpenStatementContext *_localctx = _tracker.createInstance<OpenStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, MikoParserRules::RuleOpenStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(MikoParserRules::OPEN);
    setState(167);
    expression(0);
    setState(168);
    match(MikoParserRules::SEMIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessKeywordContext ------------------------------------------------------------------

MikoParserRules::AccessKeywordContext::AccessKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::AccessKeywordContext::PUBLIC() {
  return getToken(MikoParserRules::PUBLIC, 0);
}

tree::TerminalNode* MikoParserRules::AccessKeywordContext::PRIVATE() {
  return getToken(MikoParserRules::PRIVATE, 0);
}


size_t MikoParserRules::AccessKeywordContext::getRuleIndex() const {
  return MikoParserRules::RuleAccessKeyword;
}


std::any MikoParserRules::AccessKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAccessKeyword(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::AccessKeywordContext* MikoParserRules::accessKeyword() {
  AccessKeywordContext *_localctx = _tracker.createInstance<AccessKeywordContext>(_ctx, getState());
  enterRule(_localctx, 18, MikoParserRules::RuleAccessKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _la = _input->LA(1);
    if (!(_la == MikoParserRules::PUBLIC

    || _la == MikoParserRules::PRIVATE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineKeywordContext ------------------------------------------------------------------

MikoParserRules::DefineKeywordContext::DefineKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::DefineKeywordContext::VAR() {
  return getToken(MikoParserRules::VAR, 0);
}

tree::TerminalNode* MikoParserRules::DefineKeywordContext::CONST() {
  return getToken(MikoParserRules::CONST, 0);
}

tree::TerminalNode* MikoParserRules::DefineKeywordContext::DEFINE() {
  return getToken(MikoParserRules::DEFINE, 0);
}


size_t MikoParserRules::DefineKeywordContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineKeyword;
}


std::any MikoParserRules::DefineKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineKeyword(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineKeywordContext* MikoParserRules::defineKeyword() {
  DefineKeywordContext *_localctx = _tracker.createInstance<DefineKeywordContext>(_ctx, getState());
  enterRule(_localctx, 20, MikoParserRules::RuleDefineKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineStatementContext ------------------------------------------------------------------

MikoParserRules::DefineStatementContext::DefineStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::DefineKeywordContext* MikoParserRules::DefineStatementContext::defineKeyword() {
  return getRuleContext<MikoParserRules::DefineKeywordContext>(0);
}

std::vector<MikoParserRules::DefineExpressionContext *> MikoParserRules::DefineStatementContext::defineExpression() {
  return getRuleContexts<MikoParserRules::DefineExpressionContext>();
}

MikoParserRules::DefineExpressionContext* MikoParserRules::DefineStatementContext::defineExpression(size_t i) {
  return getRuleContext<MikoParserRules::DefineExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::DefineStatementContext::SEMIC() {
  return getToken(MikoParserRules::SEMIC, 0);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineStatementContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::DefineStatementContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::DefineStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineStatement;
}


std::any MikoParserRules::DefineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineStatementContext* MikoParserRules::defineStatement() {
  DefineStatementContext *_localctx = _tracker.createInstance<DefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, MikoParserRules::RuleDefineStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    defineKeyword();
    setState(175);
    defineExpression();
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(176);
      match(MikoParserRules::COMMA);
      setState(177);
      defineExpression();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(183);
    match(MikoParserRules::SEMIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineExpressionContext ------------------------------------------------------------------

MikoParserRules::DefineExpressionContext::DefineExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::DefineExpressionContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

tree::TerminalNode* MikoParserRules::DefineExpressionContext::COLON() {
  return getToken(MikoParserRules::COLON, 0);
}

MikoParserRules::DefineTypeContext* MikoParserRules::DefineExpressionContext::defineType() {
  return getRuleContext<MikoParserRules::DefineTypeContext>(0);
}

tree::TerminalNode* MikoParserRules::DefineExpressionContext::ASS() {
  return getToken(MikoParserRules::ASS, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::DefineExpressionContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}


size_t MikoParserRules::DefineExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineExpression;
}


std::any MikoParserRules::DefineExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineExpressionContext* MikoParserRules::defineExpression() {
  DefineExpressionContext *_localctx = _tracker.createInstance<DefineExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, MikoParserRules::RuleDefineExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(MikoParserRules::ID);
    setState(186);
    match(MikoParserRules::COLON);
    setState(187);
    defineType();
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::ASS) {
      setState(188);
      match(MikoParserRules::ASS);
      setState(189);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineTypeContext ------------------------------------------------------------------

MikoParserRules::DefineTypeContext::DefineTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CompilerCallContext* MikoParserRules::DefineTypeContext::compilerCall() {
  return getRuleContext<MikoParserRules::CompilerCallContext>(0);
}

MikoParserRules::CallContext* MikoParserRules::DefineTypeContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

MikoParserRules::DefineEnumContext* MikoParserRules::DefineTypeContext::defineEnum() {
  return getRuleContext<MikoParserRules::DefineEnumContext>(0);
}

MikoParserRules::StructTypeContext* MikoParserRules::DefineTypeContext::structType() {
  return getRuleContext<MikoParserRules::StructTypeContext>(0);
}

MikoParserRules::LambdaExpressionContext* MikoParserRules::DefineTypeContext::lambdaExpression() {
  return getRuleContext<MikoParserRules::LambdaExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::DefineTypeContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

std::vector<MikoParserRules::DefineTypeContext *> MikoParserRules::DefineTypeContext::defineType() {
  return getRuleContexts<MikoParserRules::DefineTypeContext>();
}

MikoParserRules::DefineTypeContext* MikoParserRules::DefineTypeContext::defineType(size_t i) {
  return getRuleContext<MikoParserRules::DefineTypeContext>(i);
}

tree::TerminalNode* MikoParserRules::DefineTypeContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineTypeContext::BITOR() {
  return getTokens(MikoParserRules::BITOR);
}

tree::TerminalNode* MikoParserRules::DefineTypeContext::BITOR(size_t i) {
  return getToken(MikoParserRules::BITOR, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineTypeContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::DefineTypeContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::DefineTypeContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineType;
}


std::any MikoParserRules::DefineTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineType(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineTypeContext* MikoParserRules::defineType() {
  DefineTypeContext *_localctx = _tracker.createInstance<DefineTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, MikoParserRules::RuleDefineType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      compilerCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(194);
      defineEnum();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(195);
      structType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(196);
      defineEnum();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(197);
      lambdaExpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(198);
      match(MikoParserRules::LPAREN);
      setState(199);
      defineType();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::BITOR) {
        setState(200);
        match(MikoParserRules::BITOR);
        setState(201);
        defineType();
        setState(206);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(207);
      match(MikoParserRules::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(209);
      match(MikoParserRules::LPAREN);
      setState(210);
      defineType();
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::COMMA) {
        setState(211);
        match(MikoParserRules::COMMA);
        setState(212);
        defineType();
        setState(217);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(218);
      match(MikoParserRules::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternCallContext ------------------------------------------------------------------

MikoParserRules::ExternCallContext::ExternCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MikoParserRules::ExternCallContext::getRuleIndex() const {
  return MikoParserRules::RuleExternCall;
}

void MikoParserRules::ExternCallContext::copyFrom(ExternCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExternVarContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ExternVarContext::CALL() {
  return getToken(MikoParserRules::CALL, 0);
}

tree::TerminalNode* MikoParserRules::ExternVarContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

MikoParserRules::ExternVarContext::ExternVarContext(ExternCallContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ExternVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitExternVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExternFuncContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ExternFuncContext::CALL() {
  return getToken(MikoParserRules::CALL, 0);
}

tree::TerminalNode* MikoParserRules::ExternFuncContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

tree::TerminalNode* MikoParserRules::ExternFuncContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::ExternFuncContext::functionArgs() {
  return getRuleContext<MikoParserRules::FunctionArgsContext>(0);
}

tree::TerminalNode* MikoParserRules::ExternFuncContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

MikoParserRules::ExternFuncContext::ExternFuncContext(ExternCallContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ExternFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitExternFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExternStructContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ExternStructContext::CALL() {
  return getToken(MikoParserRules::CALL, 0);
}

tree::TerminalNode* MikoParserRules::ExternStructContext::STRUCT() {
  return getToken(MikoParserRules::STRUCT, 0);
}

tree::TerminalNode* MikoParserRules::ExternStructContext::LBRACE() {
  return getToken(MikoParserRules::LBRACE, 0);
}

tree::TerminalNode* MikoParserRules::ExternStructContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

std::vector<MikoParserRules::StructMemberContext *> MikoParserRules::ExternStructContext::structMember() {
  return getRuleContexts<MikoParserRules::StructMemberContext>();
}

MikoParserRules::StructMemberContext* MikoParserRules::ExternStructContext::structMember(size_t i) {
  return getRuleContext<MikoParserRules::StructMemberContext>(i);
}

MikoParserRules::ExternStructContext::ExternStructContext(ExternCallContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ExternStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitExternStruct(this);
  else
    return visitor->visitChildren(this);
}
MikoParserRules::ExternCallContext* MikoParserRules::externCall() {
  ExternCallContext *_localctx = _tracker.createInstance<ExternCallContext>(_ctx, getState());
  enterRule(_localctx, 28, MikoParserRules::RuleExternCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MikoParserRules::ExternVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(222);
      match(MikoParserRules::CALL);
      setState(223);
      match(MikoParserRules::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MikoParserRules::ExternFuncContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(224);
      match(MikoParserRules::CALL);
      setState(225);
      match(MikoParserRules::ID);
      setState(226);
      match(MikoParserRules::LPAREN);
      setState(227);
      functionArgs();
      setState(228);
      match(MikoParserRules::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MikoParserRules::ExternStructContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(230);
      match(MikoParserRules::CALL);
      setState(231);
      match(MikoParserRules::STRUCT);
      setState(232);
      match(MikoParserRules::LBRACE);
      setState(236);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2254) != 0)) {
        setState(233);
        structMember();
        setState(238);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(239);
      match(MikoParserRules::RBRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructTypeContext ------------------------------------------------------------------

MikoParserRules::StructTypeContext::StructTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::StructTypeContext::STRUCT() {
  return getToken(MikoParserRules::STRUCT, 0);
}

tree::TerminalNode* MikoParserRules::StructTypeContext::LBRACE() {
  return getToken(MikoParserRules::LBRACE, 0);
}

tree::TerminalNode* MikoParserRules::StructTypeContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

MikoParserRules::ExtendObjectContext* MikoParserRules::StructTypeContext::extendObject() {
  return getRuleContext<MikoParserRules::ExtendObjectContext>(0);
}

std::vector<MikoParserRules::OpenStatementContext *> MikoParserRules::StructTypeContext::openStatement() {
  return getRuleContexts<MikoParserRules::OpenStatementContext>();
}

MikoParserRules::OpenStatementContext* MikoParserRules::StructTypeContext::openStatement(size_t i) {
  return getRuleContext<MikoParserRules::OpenStatementContext>(i);
}

std::vector<MikoParserRules::StructMemberContext *> MikoParserRules::StructTypeContext::structMember() {
  return getRuleContexts<MikoParserRules::StructMemberContext>();
}

MikoParserRules::StructMemberContext* MikoParserRules::StructTypeContext::structMember(size_t i) {
  return getRuleContext<MikoParserRules::StructMemberContext>(i);
}


size_t MikoParserRules::StructTypeContext::getRuleIndex() const {
  return MikoParserRules::RuleStructType;
}


std::any MikoParserRules::StructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitStructType(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::StructTypeContext* MikoParserRules::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, MikoParserRules::RuleStructType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(MikoParserRules::STRUCT);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(243);
      extendObject();
    }
    setState(246);
    match(MikoParserRules::LBRACE);
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2270) != 0)) {
      setState(249);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::OPEN: {
          setState(247);
          openStatement();
          break;
        }

        case MikoParserRules::VAR:
        case MikoParserRules::CONST:
        case MikoParserRules::DEFINE:
        case MikoParserRules::PUBLIC:
        case MikoParserRules::PRIVATE:
        case MikoParserRules::STATIC: {
          setState(248);
          structMember();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(254);
    match(MikoParserRules::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMemberContext ------------------------------------------------------------------

MikoParserRules::StructMemberContext::StructMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::DefineStatementContext* MikoParserRules::StructMemberContext::defineStatement() {
  return getRuleContext<MikoParserRules::DefineStatementContext>(0);
}

MikoParserRules::AccessKeywordContext* MikoParserRules::StructMemberContext::accessKeyword() {
  return getRuleContext<MikoParserRules::AccessKeywordContext>(0);
}

tree::TerminalNode* MikoParserRules::StructMemberContext::STATIC() {
  return getToken(MikoParserRules::STATIC, 0);
}


size_t MikoParserRules::StructMemberContext::getRuleIndex() const {
  return MikoParserRules::RuleStructMember;
}


std::any MikoParserRules::StructMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitStructMember(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::StructMemberContext* MikoParserRules::structMember() {
  StructMemberContext *_localctx = _tracker.createInstance<StructMemberContext>(_ctx, getState());
  enterRule(_localctx, 32, MikoParserRules::RuleStructMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::PUBLIC

    || _la == MikoParserRules::PRIVATE) {
      setState(256);
      accessKeyword();
    }
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::STATIC) {
      setState(259);
      match(MikoParserRules::STATIC);
    }
    setState(262);
    defineStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineEnumContext ------------------------------------------------------------------

MikoParserRules::DefineEnumContext::DefineEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::ENUM() {
  return getToken(MikoParserRules::ENUM, 0);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::LBRACE() {
  return getToken(MikoParserRules::LBRACE, 0);
}

std::vector<MikoParserRules::EnumMemberContext *> MikoParserRules::DefineEnumContext::enumMember() {
  return getRuleContexts<MikoParserRules::EnumMemberContext>();
}

MikoParserRules::EnumMemberContext* MikoParserRules::DefineEnumContext::enumMember(size_t i) {
  return getRuleContext<MikoParserRules::EnumMemberContext>(i);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

MikoParserRules::ExtendObjectContext* MikoParserRules::DefineEnumContext::extendObject() {
  return getRuleContext<MikoParserRules::ExtendObjectContext>(0);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineEnumContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::DefineEnumContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineEnum;
}


std::any MikoParserRules::DefineEnumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineEnum(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineEnumContext* MikoParserRules::defineEnum() {
  DefineEnumContext *_localctx = _tracker.createInstance<DefineEnumContext>(_ctx, getState());
  enterRule(_localctx, 34, MikoParserRules::RuleDefineEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(MikoParserRules::ENUM);
    setState(266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(265);
      extendObject();
    }
    setState(268);
    match(MikoParserRules::LBRACE);
    setState(269);
    enumMember();
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(270);
      match(MikoParserRules::COMMA);
      setState(271);
      enumMember();
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(277);
    match(MikoParserRules::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumMemberContext ------------------------------------------------------------------

MikoParserRules::EnumMemberContext::EnumMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::EnumMemberContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

tree::TerminalNode* MikoParserRules::EnumMemberContext::ASS() {
  return getToken(MikoParserRules::ASS, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::EnumMemberContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}


size_t MikoParserRules::EnumMemberContext::getRuleIndex() const {
  return MikoParserRules::RuleEnumMember;
}


std::any MikoParserRules::EnumMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitEnumMember(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::EnumMemberContext* MikoParserRules::enumMember() {
  EnumMemberContext *_localctx = _tracker.createInstance<EnumMemberContext>(_ctx, getState());
  enterRule(_localctx, 36, MikoParserRules::RuleEnumMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(279);
      match(MikoParserRules::ID);
      break;
    }

    case 2: {
      setState(280);
      match(MikoParserRules::ID);
      setState(281);
      match(MikoParserRules::ASS);
      setState(282);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtendObjectContext ------------------------------------------------------------------

MikoParserRules::ExtendObjectContext::ExtendObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::ExtendObjectContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::CallContext* MikoParserRules::ExtendObjectContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

tree::TerminalNode* MikoParserRules::ExtendObjectContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}


size_t MikoParserRules::ExtendObjectContext::getRuleIndex() const {
  return MikoParserRules::RuleExtendObject;
}


std::any MikoParserRules::ExtendObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitExtendObject(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ExtendObjectContext* MikoParserRules::extendObject() {
  ExtendObjectContext *_localctx = _tracker.createInstance<ExtendObjectContext>(_ctx, getState());
  enterRule(_localctx, 38, MikoParserRules::RuleExtendObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(MikoParserRules::LPAREN);
    setState(286);
    call();
    setState(287);
    match(MikoParserRules::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilerCallContext ------------------------------------------------------------------

MikoParserRules::CompilerCallContext::CompilerCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MikoParserRules::CompilerCallContext::getRuleIndex() const {
  return MikoParserRules::RuleCompilerCall;
}

void MikoParserRules::CompilerCallContext::copyFrom(CompilerCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompilerFuncContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::CompilerFuncContext::COMPILER() {
  return getToken(MikoParserRules::COMPILER, 0);
}

tree::TerminalNode* MikoParserRules::CompilerFuncContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

tree::TerminalNode* MikoParserRules::CompilerFuncContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::CompilerFuncContext::functionArgs() {
  return getRuleContext<MikoParserRules::FunctionArgsContext>(0);
}

tree::TerminalNode* MikoParserRules::CompilerFuncContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

MikoParserRules::CompilerFuncContext::CompilerFuncContext(CompilerCallContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::CompilerFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCompilerFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompilerVarContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::CompilerVarContext::COMPILER() {
  return getToken(MikoParserRules::COMPILER, 0);
}

tree::TerminalNode* MikoParserRules::CompilerVarContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

MikoParserRules::CompilerVarContext::CompilerVarContext(CompilerCallContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::CompilerVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCompilerVar(this);
  else
    return visitor->visitChildren(this);
}
MikoParserRules::CompilerCallContext* MikoParserRules::compilerCall() {
  CompilerCallContext *_localctx = _tracker.createInstance<CompilerCallContext>(_ctx, getState());
  enterRule(_localctx, 40, MikoParserRules::RuleCompilerCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MikoParserRules::CompilerVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(289);
      match(MikoParserRules::COMPILER);
      setState(290);
      match(MikoParserRules::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MikoParserRules::CompilerFuncContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(291);
      match(MikoParserRules::COMPILER);
      setState(292);
      match(MikoParserRules::ID);
      setState(293);
      match(MikoParserRules::LPAREN);
      setState(294);
      functionArgs();
      setState(295);
      match(MikoParserRules::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

MikoParserRules::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MikoParserRules::CallContext::ID() {
  return getTokens(MikoParserRules::ID);
}

tree::TerminalNode* MikoParserRules::CallContext::ID(size_t i) {
  return getToken(MikoParserRules::ID, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::CallContext::DOT() {
  return getTokens(MikoParserRules::DOT);
}

tree::TerminalNode* MikoParserRules::CallContext::DOT(size_t i) {
  return getToken(MikoParserRules::DOT, i);
}

tree::TerminalNode* MikoParserRules::CallContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::CallContext::functionArgs() {
  return getRuleContext<MikoParserRules::FunctionArgsContext>(0);
}

tree::TerminalNode* MikoParserRules::CallContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}


size_t MikoParserRules::CallContext::getRuleIndex() const {
  return MikoParserRules::RuleCall;
}


std::any MikoParserRules::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::CallContext* MikoParserRules::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 42, MikoParserRules::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(299);
      match(MikoParserRules::ID);
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(300);
          match(MikoParserRules::DOT);
          setState(301);
          match(MikoParserRules::ID); 
        }
        setState(306);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(307);
      match(MikoParserRules::ID);
      setState(308);
      match(MikoParserRules::LPAREN);
      setState(309);
      functionArgs();
      setState(310);
      match(MikoParserRules::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgsContext ------------------------------------------------------------------

MikoParserRules::FunctionArgsContext::FunctionArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::FunctionArgsContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::FunctionArgsContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MikoParserRules::FunctionArgsContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::FunctionArgsContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::FunctionArgsContext::getRuleIndex() const {
  return MikoParserRules::RuleFunctionArgs;
}


std::any MikoParserRules::FunctionArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitFunctionArgs(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::functionArgs() {
  FunctionArgsContext *_localctx = _tracker.createInstance<FunctionArgsContext>(_ctx, getState());
  enterRule(_localctx, 44, MikoParserRules::RuleFunctionArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    expression(0);
    setState(319);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(315);
      match(MikoParserRules::COMMA);
      setState(316);
      expression(0);
      setState(321);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomExpressionContext ------------------------------------------------------------------

MikoParserRules::AtomExpressionContext::AtomExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CallContext* MikoParserRules::AtomExpressionContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

tree::TerminalNode* MikoParserRules::AtomExpressionContext::INT() {
  return getToken(MikoParserRules::INT, 0);
}

tree::TerminalNode* MikoParserRules::AtomExpressionContext::FLOAT() {
  return getToken(MikoParserRules::FLOAT, 0);
}

tree::TerminalNode* MikoParserRules::AtomExpressionContext::CHAR() {
  return getToken(MikoParserRules::CHAR, 0);
}

tree::TerminalNode* MikoParserRules::AtomExpressionContext::STRING() {
  return getToken(MikoParserRules::STRING, 0);
}


size_t MikoParserRules::AtomExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleAtomExpression;
}


std::any MikoParserRules::AtomExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAtomExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::AtomExpressionContext* MikoParserRules::atomExpression() {
  AtomExpressionContext *_localctx = _tracker.createInstance<AtomExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, MikoParserRules::RuleAtomExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::ID: {
        enterOuterAlt(_localctx, 1);
        setState(322);
        call();
        break;
      }

      case MikoParserRules::INT: {
        enterOuterAlt(_localctx, 2);
        setState(323);
        match(MikoParserRules::INT);
        break;
      }

      case MikoParserRules::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(324);
        match(MikoParserRules::FLOAT);
        break;
      }

      case MikoParserRules::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(325);
        match(MikoParserRules::CHAR);
        break;
      }

      case MikoParserRules::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(326);
        match(MikoParserRules::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

MikoParserRules::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MikoParserRules::ExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleExpression;
}

void MikoParserRules::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::AddContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::AddContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::AddContext::ADD() {
  return getToken(MikoParserRules::ADD, 0);
}

tree::TerminalNode* MikoParserRules::AddContext::MIN() {
  return getToken(MikoParserRules::MIN, 0);
}

MikoParserRules::AddContext::AddContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParentContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ParentContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::ParentContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::ParentContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

MikoParserRules::ParentContext::ParentContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ParentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitParent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::MinusContext::MIN() {
  return getToken(MikoParserRules::MIN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::MinusContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::MinusContext::MinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicBoSContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::LogicBoSContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::LogicBoSContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::LogicBoSContext::BIG() {
  return getToken(MikoParserRules::BIG, 0);
}

tree::TerminalNode* MikoParserRules::LogicBoSContext::BIG_EQ() {
  return getToken(MikoParserRules::BIG_EQ, 0);
}

tree::TerminalNode* MikoParserRules::LogicBoSContext::SMALL() {
  return getToken(MikoParserRules::SMALL, 0);
}

tree::TerminalNode* MikoParserRules::LogicBoSContext::SMALL_EQ() {
  return getToken(MikoParserRules::SMALL_EQ, 0);
}

MikoParserRules::LogicBoSContext::LogicBoSContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::LogicBoSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLogicBoS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::BitOrContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::BitOrContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::BitOrContext::BITOR() {
  return getToken(MikoParserRules::BITOR, 0);
}

MikoParserRules::BitOrContext::BitOrContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::BitOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitBitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOrContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::LogicOrContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::LogicOrContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::LogicOrContext::OR() {
  return getToken(MikoParserRules::OR, 0);
}

MikoParserRules::LogicOrContext::LogicOrContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::LogicOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLogicOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DotContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::DotContext::DOT() {
  return getToken(MikoParserRules::DOT, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::DotContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::DotContext::DotContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::DotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ThisContext::THIS() {
  return getToken(MikoParserRules::THIS, 0);
}

MikoParserRules::ThisContext::ThisContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ThisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitThis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncrementContext ------------------------------------------------------------------

MikoParserRules::ExpressionContext* MikoParserRules::IncrementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::IncrementContext::DADD() {
  return getToken(MikoParserRules::DADD, 0);
}

MikoParserRules::IncrementContext::IncrementContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::IncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitIncrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitshiftContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::BitshiftContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::BitshiftContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::BitshiftContext::LSHIFT() {
  return getToken(MikoParserRules::LSHIFT, 0);
}

tree::TerminalNode* MikoParserRules::BitshiftContext::RSHIFT() {
  return getToken(MikoParserRules::RSHIFT, 0);
}

MikoParserRules::BitshiftContext::BitshiftContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::BitshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitBitshift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicEqContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::LogicEqContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::LogicEqContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::LogicEqContext::DOB_EQ() {
  return getToken(MikoParserRules::DOB_EQ, 0);
}

tree::TerminalNode* MikoParserRules::LogicEqContext::NOT_EQ() {
  return getToken(MikoParserRules::NOT_EQ, 0);
}

MikoParserRules::LogicEqContext::LogicEqContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::LogicEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLogicEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::MultiContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::MultiContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::MultiContext::MUL() {
  return getToken(MikoParserRules::MUL, 0);
}

tree::TerminalNode* MikoParserRules::MultiContext::DIV() {
  return getToken(MikoParserRules::DIV, 0);
}

tree::TerminalNode* MikoParserRules::MultiContext::MOD() {
  return getToken(MikoParserRules::MOD, 0);
}

MikoParserRules::MultiContext::MultiContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::MultiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitMulti(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CommaContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::CommaContext::COMMA() {
  return getToken(MikoParserRules::COMMA, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::CommaContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::CommaContext::CommaContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::NotContext::NOT() {
  return getToken(MikoParserRules::NOT, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::NotContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::NotContext::NotContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LambdaContext ------------------------------------------------------------------

MikoParserRules::LambdaExpressionContext* MikoParserRules::LambdaContext::lambdaExpression() {
  return getRuleContext<MikoParserRules::LambdaExpressionContext>(0);
}

MikoParserRules::LambdaContext::LambdaContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::LambdaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambda(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::BitAndContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::BitAndContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::BitAndContext::BITAND() {
  return getToken(MikoParserRules::BITAND, 0);
}

MikoParserRules::BitAndContext::BitAndContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::BitAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitBitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicAndContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::LogicAndContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::LogicAndContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::LogicAndContext::AND() {
  return getToken(MikoParserRules::AND, 0);
}

MikoParserRules::LogicAndContext::LogicAndContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::LogicAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLogicAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegateContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::NegateContext::BITNOT() {
  return getToken(MikoParserRules::BITNOT, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::NegateContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::NegateContext::NegateContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::NegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitNegate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXorContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::BitXorContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::BitXorContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::BitXorContext::BITXOR() {
  return getToken(MikoParserRules::BITXOR, 0);
}

MikoParserRules::BitXorContext::BitXorContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::BitXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitBitXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecrmentContext ------------------------------------------------------------------

MikoParserRules::ExpressionContext* MikoParserRules::DecrmentContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::DecrmentContext::DMIN() {
  return getToken(MikoParserRules::DMIN, 0);
}

MikoParserRules::DecrmentContext::DecrmentContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::DecrmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDecrment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomContext ------------------------------------------------------------------

MikoParserRules::AtomExpressionContext* MikoParserRules::AtomContext::atomExpression() {
  return getRuleContext<MikoParserRules::AtomExpressionContext>(0);
}

MikoParserRules::AtomContext::AtomContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpenContext ------------------------------------------------------------------

MikoParserRules::OpenExpressionContext* MikoParserRules::OpenContext::openExpression() {
  return getRuleContext<MikoParserRules::OpenExpressionContext>(0);
}

MikoParserRules::OpenContext::OpenContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::OpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitOpen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjectContext ------------------------------------------------------------------

MikoParserRules::CallContext* MikoParserRules::ObjectContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

MikoParserRules::ObjectContext::ObjectContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::AssignContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::AssignContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

MikoParserRules::AssignmentOperatorContext* MikoParserRules::AssignContext::assignmentOperator() {
  return getRuleContext<MikoParserRules::AssignmentOperatorContext>(0);
}

MikoParserRules::AssignContext::AssignContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any MikoParserRules::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ExpressionContext* MikoParserRules::expression() {
   return expression(0);
}

MikoParserRules::ExpressionContext* MikoParserRules::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MikoParserRules::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  MikoParserRules::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, MikoParserRules::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(349);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ObjectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(330);
      call();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(331);
      match(MikoParserRules::LPAREN);
      setState(332);
      expression(0);
      setState(333);
      match(MikoParserRules::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CommaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(335);
      match(MikoParserRules::COMMA);
      setState(336);
      expression(22);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(337);
      match(MikoParserRules::DOT);
      setState(338);
      expression(21);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(339);
      match(MikoParserRules::MIN);
      setState(340);
      expression(20);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NegateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(341);
      match(MikoParserRules::BITNOT);
      setState(342);
      expression(19);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(343);
      match(MikoParserRules::NOT);
      setState(344);
      expression(18);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ThisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(345);
      match(MikoParserRules::THIS);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<OpenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(346);
      openExpression();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<LambdaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(347);
      lambdaExpression();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<AtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(348);
      atomExpression();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(389);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(351);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(352);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 60129542144) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(353);
          expression(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(354);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(355);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::ADD

          || _la == MikoParserRules::MIN)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(356);
          expression(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitshiftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(357);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(358);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::LSHIFT

          || _la == MikoParserRules::RSHIFT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(359);
          expression(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicBoSContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(360);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(361);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8246337208320) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(362);
          expression(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LogicEqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(363);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(364);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::DOB_EQ

          || _la == MikoParserRules::NOT_EQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(365);
          expression(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(366);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(367);
          match(MikoParserRules::BITAND);
          setState(368);
          expression(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(369);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(370);
          match(MikoParserRules::BITXOR);
          setState(371);
          expression(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(372);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(373);
          match(MikoParserRules::BITOR);
          setState(374);
          expression(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(375);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(376);
          match(MikoParserRules::AND);
          setState(377);
          expression(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(378);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(379);
          match(MikoParserRules::OR);
          setState(380);
          expression(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<AssignContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(381);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(382);
          assignmentOperator();
          setState(383);
          expression(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<IncrementContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(385);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(386);
          match(MikoParserRules::DADD);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<DecrmentContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(387);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(388);
          match(MikoParserRules::DMIN);
          break;
        }

        default:
          break;
        } 
      }
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OpenExpressionContext ------------------------------------------------------------------

MikoParserRules::OpenExpressionContext::OpenExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::OpenExpressionContext::OPEN() {
  return getToken(MikoParserRules::OPEN, 0);
}

std::vector<tree::TerminalNode *> MikoParserRules::OpenExpressionContext::ID() {
  return getTokens(MikoParserRules::ID);
}

tree::TerminalNode* MikoParserRules::OpenExpressionContext::ID(size_t i) {
  return getToken(MikoParserRules::ID, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::OpenExpressionContext::DOT() {
  return getTokens(MikoParserRules::DOT);
}

tree::TerminalNode* MikoParserRules::OpenExpressionContext::DOT(size_t i) {
  return getToken(MikoParserRules::DOT, i);
}


size_t MikoParserRules::OpenExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleOpenExpression;
}


std::any MikoParserRules::OpenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitOpenExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::OpenExpressionContext* MikoParserRules::openExpression() {
  OpenExpressionContext *_localctx = _tracker.createInstance<OpenExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, MikoParserRules::RuleOpenExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(MikoParserRules::OPEN);
    setState(395);
    match(MikoParserRules::ID);
    setState(400);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(396);
        match(MikoParserRules::DOT);
        setState(397);
        match(MikoParserRules::ID); 
      }
      setState(402);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

MikoParserRules::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::ASS() {
  return getToken(MikoParserRules::ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::DIV_ASS() {
  return getToken(MikoParserRules::DIV_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::MUL_ASS() {
  return getToken(MikoParserRules::MUL_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::MOD_ASS() {
  return getToken(MikoParserRules::MOD_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::ADD_ASS() {
  return getToken(MikoParserRules::ADD_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::MIN_ASS() {
  return getToken(MikoParserRules::MIN_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::LSHIFT_ASS() {
  return getToken(MikoParserRules::LSHIFT_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::RSHIFT_ASS() {
  return getToken(MikoParserRules::RSHIFT_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::BITAND_ASS() {
  return getToken(MikoParserRules::BITAND_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::BITXOR_ASS() {
  return getToken(MikoParserRules::BITXOR_ASS, 0);
}

tree::TerminalNode* MikoParserRules::AssignmentOperatorContext::BITOR_ASS() {
  return getToken(MikoParserRules::BITOR_ASS, 0);
}


size_t MikoParserRules::AssignmentOperatorContext::getRuleIndex() const {
  return MikoParserRules::RuleAssignmentOperator;
}


std::any MikoParserRules::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::AssignmentOperatorContext* MikoParserRules::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 52, MikoParserRules::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    _la = _input->LA(1);
    if (!(((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & 2047) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

MikoParserRules::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::LambdaHeadContext* MikoParserRules::LambdaExpressionContext::lambdaHead() {
  return getRuleContext<MikoParserRules::LambdaHeadContext>(0);
}

tree::TerminalNode* MikoParserRules::LambdaExpressionContext::DOT() {
  return getToken(MikoParserRules::DOT, 0);
}

MikoParserRules::LambdaBodyContext* MikoParserRules::LambdaExpressionContext::lambdaBody() {
  return getRuleContext<MikoParserRules::LambdaBodyContext>(0);
}


size_t MikoParserRules::LambdaExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleLambdaExpression;
}


std::any MikoParserRules::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::LambdaExpressionContext* MikoParserRules::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, MikoParserRules::RuleLambdaExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    lambdaHead();
    setState(406);
    match(MikoParserRules::DOT);
    setState(407);
    lambdaBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaHeadContext ------------------------------------------------------------------

MikoParserRules::LambdaHeadContext::LambdaHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::LambdaHeadContext::LAMBDA() {
  return getToken(MikoParserRules::LAMBDA, 0);
}

tree::TerminalNode* MikoParserRules::LambdaHeadContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

std::vector<MikoParserRules::DefineExpressionContext *> MikoParserRules::LambdaHeadContext::defineExpression() {
  return getRuleContexts<MikoParserRules::DefineExpressionContext>();
}

MikoParserRules::DefineExpressionContext* MikoParserRules::LambdaHeadContext::defineExpression(size_t i) {
  return getRuleContext<MikoParserRules::DefineExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::LambdaHeadContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

std::vector<tree::TerminalNode *> MikoParserRules::LambdaHeadContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::LambdaHeadContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::LambdaHeadContext::getRuleIndex() const {
  return MikoParserRules::RuleLambdaHead;
}


std::any MikoParserRules::LambdaHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambdaHead(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::LambdaHeadContext* MikoParserRules::lambdaHead() {
  LambdaHeadContext *_localctx = _tracker.createInstance<LambdaHeadContext>(_ctx, getState());
  enterRule(_localctx, 56, MikoParserRules::RuleLambdaHead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(MikoParserRules::LAMBDA);
    setState(410);
    match(MikoParserRules::LPAREN);
    setState(411);
    defineExpression();
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(412);
      match(MikoParserRules::COMMA);
      setState(413);
      defineExpression();
      setState(418);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(419);
    match(MikoParserRules::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaBodyContext ------------------------------------------------------------------

MikoParserRules::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CodeBlockContext* MikoParserRules::LambdaBodyContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}

MikoParserRules::ReturncodeBlockContext* MikoParserRules::LambdaBodyContext::returncodeBlock() {
  return getRuleContext<MikoParserRules::ReturncodeBlockContext>(0);
}

MikoParserRules::StatementContext* MikoParserRules::LambdaBodyContext::statement() {
  return getRuleContext<MikoParserRules::StatementContext>(0);
}

MikoParserRules::ExpressionContext* MikoParserRules::LambdaBodyContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}


size_t MikoParserRules::LambdaBodyContext::getRuleIndex() const {
  return MikoParserRules::RuleLambdaBody;
}


std::any MikoParserRules::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambdaBody(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::LambdaBodyContext* MikoParserRules::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 58, MikoParserRules::RuleLambdaBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(425);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(421);
      codeBlock();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(422);
      returncodeBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(423);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(424);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeBlockContext ------------------------------------------------------------------

MikoParserRules::CodeBlockContext::CodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::CodeBlockContext::LBRACE() {
  return getToken(MikoParserRules::LBRACE, 0);
}

std::vector<MikoParserRules::StatementContext *> MikoParserRules::CodeBlockContext::statement() {
  return getRuleContexts<MikoParserRules::StatementContext>();
}

MikoParserRules::StatementContext* MikoParserRules::CodeBlockContext::statement(size_t i) {
  return getRuleContext<MikoParserRules::StatementContext>(i);
}

tree::TerminalNode* MikoParserRules::CodeBlockContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}


size_t MikoParserRules::CodeBlockContext::getRuleIndex() const {
  return MikoParserRules::RuleCodeBlock;
}


std::any MikoParserRules::CodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::CodeBlockContext* MikoParserRules::codeBlock() {
  CodeBlockContext *_localctx = _tracker.createInstance<CodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 60, MikoParserRules::RuleCodeBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(MikoParserRules::LBRACE);
    setState(428);
    statement();
    setState(432);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9288955011977278) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(429);
      statement();
      setState(434);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(435);
    match(MikoParserRules::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturncodeBlockContext ------------------------------------------------------------------

MikoParserRules::ReturncodeBlockContext::ReturncodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::DefineTypeContext* MikoParserRules::ReturncodeBlockContext::defineType() {
  return getRuleContext<MikoParserRules::DefineTypeContext>(0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::ReturncodeBlockContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}


size_t MikoParserRules::ReturncodeBlockContext::getRuleIndex() const {
  return MikoParserRules::RuleReturncodeBlock;
}


std::any MikoParserRules::ReturncodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitReturncodeBlock(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ReturncodeBlockContext* MikoParserRules::returncodeBlock() {
  ReturncodeBlockContext *_localctx = _tracker.createInstance<ReturncodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 62, MikoParserRules::RuleReturncodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    defineType();
    setState(438);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MikoParserRules::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MikoParserRules::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 17);
    case 12: return precpred(_ctx, 16);

  default:
    break;
  }
  return true;
}

void MikoParserRules::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mikoparserrulesParserInitialize();
#else
  ::antlr4::internal::call_once(mikoparserrulesParserOnceFlag, mikoparserrulesParserInitialize);
#endif
}
