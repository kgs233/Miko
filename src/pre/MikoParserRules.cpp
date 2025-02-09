
// Generated from MikoParserRules.g4 by ANTLR 4.13.2


#include "MikoParserRulesListener.h"

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
      "forStatement", "whileStatement", "returnStatement", "accessKeyword", 
      "defineKeyword", "defineStatement", "define", "defineExpression", 
      "type", "structType", "structBody", "structDefineStatement", "defineEnum", 
      "enumBody", "call", "callIdentifier", "callFunction", "functionArgs", 
      "atomExpression", "expression", "openExpression", "assignmentOperator", 
      "lambdaExpression", "lambdaHead", "lambdaBody", "codeBlock", "returncodeBlock"
    },
    std::vector<std::string>{
      "", "'var'", "'const'", "'define'", "'open'", "'this'", "'public'", 
      "'private'", "'local'", "'enum'", "'struct'", "'static'", "'if'", 
      "'else'", "'match'", "'for'", "'foreach'", "'while'", "'break'", "'next'", 
      "'return'", "", "", "", "", "", "'.'", "';'", "':'", "','", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'", "'>'", "'>='", 
      "'<'", "'<='", "'=='", "'!='", "'&'", "'|'", "'^'", "'~'", "'<<'", 
      "'>>'", "'++'", "'--'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", 
      "'^='", "'|='", "'\\'"
    },
    std::vector<std::string>{
      "", "VAR", "CONST", "DEFINE", "OPEN", "THIS", "PUBLIC", "PRIVATE", 
      "LOCAL", "ENUM", "STRUCT", "STATIC", "IF", "ELSE", "MATCH", "FOR", 
      "FOREACH", "WHILE", "BREAK", "NEXT", "RETURN", "ID", "INT", "CHAR", 
      "FLOAT", "STRING", "DOT", "SEMIC", "COLON", "COMMA", "ADD", "MIN", 
      "MUL", "DIV", "MOD", "AND", "OR", "NOT", "BIG", "BIG_EQ", "SMALL", 
      "SMALL_EQ", "DOB_EQ", "NOT_EQ", "BITAND", "BITOR", "BITXOR", "BITNOT", 
      "LSHIFT", "RSHIFT", "DADD", "DMIN", "LPAREN", "RPAREN", "LBRACE", 
      "RBRACE", "LBRACK", "RBRACK", "ASS", "MUL_ASS", "DIV_ASS", "MOD_ASS", 
      "ADD_ASS", "MIN_ASS", "LSHIFT_ASS", "RSHIFT_ASS", "BITAND_ASS", "BITXOR_ASS", 
      "BITOR_ASS", "LAMBDA", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,70,405,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,5,0,68,8,0,10,0,12,0,71,
  	9,0,1,0,5,0,74,8,0,10,0,12,0,77,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,3,1,91,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,99,8,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,3,2,107,8,2,1,2,1,2,1,2,3,2,112,8,2,3,2,114,8,2,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,5,3,123,8,3,10,3,12,3,126,9,3,1,3,1,3,1,3,1,3,3,3,
  	132,8,3,1,4,1,4,1,4,1,4,3,4,138,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,3,5,150,8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,158,8,6,1,7,1,7,3,7,162,
  	8,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,3,11,177,
  	8,11,1,11,1,11,1,11,1,11,3,11,183,8,11,5,11,185,8,11,10,11,12,11,188,
  	9,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,198,8,13,1,13,1,13,
  	1,13,1,13,1,13,3,13,205,8,13,1,14,1,14,1,14,1,14,1,14,3,14,212,8,14,1,
  	14,1,14,1,14,1,14,1,15,1,15,5,15,220,8,15,10,15,12,15,223,9,15,1,16,3,
  	16,226,8,16,1,16,3,16,229,8,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,3,17,
  	238,8,17,1,17,1,17,3,17,242,8,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,5,
  	18,251,8,18,10,18,12,18,254,9,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,262,
  	8,18,10,18,12,18,265,9,18,3,18,267,8,18,1,19,1,19,3,19,271,8,19,1,20,
  	1,20,1,20,5,20,276,8,20,10,20,12,20,279,9,20,1,21,1,21,1,21,1,21,1,21,
  	1,22,1,22,1,22,5,22,289,8,22,10,22,12,22,292,9,22,1,23,1,23,1,23,1,23,
  	1,23,3,23,299,8,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,
  	324,8,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,5,24,362,8,24,10,24,
  	12,24,365,9,24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,
  	1,28,5,28,379,8,28,10,28,12,28,382,9,28,1,28,1,28,1,29,1,29,1,29,1,29,
  	3,29,390,8,29,1,30,1,30,1,30,5,30,395,8,30,10,30,12,30,398,9,30,1,30,
  	1,30,1,31,1,31,1,31,1,31,0,1,48,32,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,0,8,1,0,6,8,
  	1,0,1,3,1,0,32,34,1,0,30,31,1,0,48,49,1,0,38,41,1,0,42,43,1,0,58,68,442,
  	0,69,1,0,0,0,2,90,1,0,0,0,4,113,1,0,0,0,6,115,1,0,0,0,8,133,1,0,0,0,10,
  	139,1,0,0,0,12,151,1,0,0,0,14,159,1,0,0,0,16,165,1,0,0,0,18,167,1,0,0,
  	0,20,169,1,0,0,0,22,173,1,0,0,0,24,189,1,0,0,0,26,204,1,0,0,0,28,206,
  	1,0,0,0,30,217,1,0,0,0,32,225,1,0,0,0,34,232,1,0,0,0,36,266,1,0,0,0,38,
  	270,1,0,0,0,40,272,1,0,0,0,42,280,1,0,0,0,44,285,1,0,0,0,46,298,1,0,0,
  	0,48,323,1,0,0,0,50,366,1,0,0,0,52,369,1,0,0,0,54,371,1,0,0,0,56,375,
  	1,0,0,0,58,389,1,0,0,0,60,391,1,0,0,0,62,401,1,0,0,0,64,65,3,50,25,0,
  	65,66,5,27,0,0,66,68,1,0,0,0,67,64,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,
  	0,69,70,1,0,0,0,70,75,1,0,0,0,71,69,1,0,0,0,72,74,3,30,15,0,73,72,1,0,
  	0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,1,1,0,0,0,77,75,1,0,
  	0,0,78,91,5,27,0,0,79,80,3,48,24,0,80,81,5,27,0,0,81,91,1,0,0,0,82,83,
  	3,20,10,0,83,84,5,27,0,0,84,91,1,0,0,0,85,91,3,4,2,0,86,91,3,6,3,0,87,
  	91,3,10,5,0,88,91,3,12,6,0,89,91,3,14,7,0,90,78,1,0,0,0,90,79,1,0,0,0,
  	90,82,1,0,0,0,90,85,1,0,0,0,90,86,1,0,0,0,90,87,1,0,0,0,90,88,1,0,0,0,
  	90,89,1,0,0,0,91,3,1,0,0,0,92,93,5,12,0,0,93,94,5,52,0,0,94,95,3,48,24,
  	0,95,98,5,53,0,0,96,99,3,60,30,0,97,99,3,2,1,0,98,96,1,0,0,0,98,97,1,
  	0,0,0,99,114,1,0,0,0,100,101,5,12,0,0,101,102,5,52,0,0,102,103,3,48,24,
  	0,103,106,5,53,0,0,104,107,3,60,30,0,105,107,3,2,1,0,106,104,1,0,0,0,
  	106,105,1,0,0,0,107,108,1,0,0,0,108,111,5,13,0,0,109,112,3,60,30,0,110,
  	112,3,2,1,0,111,109,1,0,0,0,111,110,1,0,0,0,112,114,1,0,0,0,113,92,1,
  	0,0,0,113,100,1,0,0,0,114,5,1,0,0,0,115,116,5,14,0,0,116,117,5,52,0,0,
  	117,118,3,48,24,0,118,119,5,53,0,0,119,120,5,54,0,0,120,124,3,8,4,0,121,
  	123,3,8,4,0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,125,1,
  	0,0,0,125,127,1,0,0,0,126,124,1,0,0,0,127,128,5,55,0,0,128,131,5,13,0,
  	0,129,132,3,60,30,0,130,132,3,2,1,0,131,129,1,0,0,0,131,130,1,0,0,0,132,
  	7,1,0,0,0,133,134,3,48,24,0,134,137,5,28,0,0,135,138,3,60,30,0,136,138,
  	3,2,1,0,137,135,1,0,0,0,137,136,1,0,0,0,138,9,1,0,0,0,139,140,5,15,0,
  	0,140,141,5,52,0,0,141,142,3,22,11,0,142,143,5,27,0,0,143,144,3,48,24,
  	0,144,145,5,27,0,0,145,146,3,48,24,0,146,149,5,53,0,0,147,150,3,60,30,
  	0,148,150,3,2,1,0,149,147,1,0,0,0,149,148,1,0,0,0,150,11,1,0,0,0,151,
  	152,5,17,0,0,152,153,5,52,0,0,153,154,3,48,24,0,154,157,5,53,0,0,155,
  	158,3,60,30,0,156,158,3,2,1,0,157,155,1,0,0,0,157,156,1,0,0,0,158,13,
  	1,0,0,0,159,161,5,20,0,0,160,162,3,48,24,0,161,160,1,0,0,0,161,162,1,
  	0,0,0,162,163,1,0,0,0,163,164,5,27,0,0,164,15,1,0,0,0,165,166,7,0,0,0,
  	166,17,1,0,0,0,167,168,7,1,0,0,168,19,1,0,0,0,169,170,3,18,9,0,170,171,
  	3,22,11,0,171,172,5,27,0,0,172,21,1,0,0,0,173,176,3,24,12,0,174,175,5,
  	58,0,0,175,177,3,48,24,0,176,174,1,0,0,0,176,177,1,0,0,0,177,186,1,0,
  	0,0,178,179,5,29,0,0,179,182,3,24,12,0,180,181,5,58,0,0,181,183,3,48,
  	24,0,182,180,1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,178,1,0,0,0,
  	185,188,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,23,1,0,0,0,188,186,
  	1,0,0,0,189,190,5,21,0,0,190,191,5,28,0,0,191,192,3,26,13,0,192,25,1,
  	0,0,0,193,205,3,38,19,0,194,195,3,38,19,0,195,197,5,56,0,0,196,198,3,
  	48,24,0,197,196,1,0,0,0,197,198,1,0,0,0,198,199,1,0,0,0,199,200,5,57,
  	0,0,200,205,1,0,0,0,201,205,3,28,14,0,202,205,3,34,17,0,203,205,3,54,
  	27,0,204,193,1,0,0,0,204,194,1,0,0,0,204,201,1,0,0,0,204,202,1,0,0,0,
  	204,203,1,0,0,0,205,27,1,0,0,0,206,211,5,10,0,0,207,208,5,52,0,0,208,
  	209,3,38,19,0,209,210,5,53,0,0,210,212,1,0,0,0,211,207,1,0,0,0,211,212,
  	1,0,0,0,212,213,1,0,0,0,213,214,5,54,0,0,214,215,3,30,15,0,215,216,5,
  	55,0,0,216,29,1,0,0,0,217,221,3,32,16,0,218,220,3,32,16,0,219,218,1,0,
  	0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,31,1,0,0,0,223,
  	221,1,0,0,0,224,226,3,16,8,0,225,224,1,0,0,0,225,226,1,0,0,0,226,228,
  	1,0,0,0,227,229,5,11,0,0,228,227,1,0,0,0,228,229,1,0,0,0,229,230,1,0,
  	0,0,230,231,3,20,10,0,231,33,1,0,0,0,232,237,5,9,0,0,233,234,5,52,0,0,
  	234,235,3,38,19,0,235,236,5,53,0,0,236,238,1,0,0,0,237,233,1,0,0,0,237,
  	238,1,0,0,0,238,241,1,0,0,0,239,240,5,28,0,0,240,242,3,26,13,0,241,239,
  	1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,5,54,0,0,244,245,3,36,
  	18,0,245,246,5,55,0,0,246,35,1,0,0,0,247,252,5,21,0,0,248,249,5,29,0,
  	0,249,251,5,21,0,0,250,248,1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,
  	253,1,0,0,0,253,267,1,0,0,0,254,252,1,0,0,0,255,256,5,21,0,0,256,257,
  	5,58,0,0,257,263,3,48,24,0,258,259,5,21,0,0,259,260,5,58,0,0,260,262,
  	3,48,24,0,261,258,1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,0,263,264,1,0,
  	0,0,264,267,1,0,0,0,265,263,1,0,0,0,266,247,1,0,0,0,266,255,1,0,0,0,267,
  	37,1,0,0,0,268,271,3,42,21,0,269,271,3,40,20,0,270,268,1,0,0,0,270,269,
  	1,0,0,0,271,39,1,0,0,0,272,277,5,21,0,0,273,274,5,26,0,0,274,276,5,21,
  	0,0,275,273,1,0,0,0,276,279,1,0,0,0,277,275,1,0,0,0,277,278,1,0,0,0,278,
  	41,1,0,0,0,279,277,1,0,0,0,280,281,5,21,0,0,281,282,5,52,0,0,282,283,
  	3,44,22,0,283,284,5,53,0,0,284,43,1,0,0,0,285,290,3,48,24,0,286,287,5,
  	29,0,0,287,289,3,48,24,0,288,286,1,0,0,0,289,292,1,0,0,0,290,288,1,0,
  	0,0,290,291,1,0,0,0,291,45,1,0,0,0,292,290,1,0,0,0,293,299,3,38,19,0,
  	294,299,5,22,0,0,295,299,5,24,0,0,296,299,5,23,0,0,297,299,5,25,0,0,298,
  	293,1,0,0,0,298,294,1,0,0,0,298,295,1,0,0,0,298,296,1,0,0,0,298,297,1,
  	0,0,0,299,47,1,0,0,0,300,301,6,24,-1,0,301,302,5,52,0,0,302,303,3,48,
  	24,0,303,304,5,53,0,0,304,324,1,0,0,0,305,306,5,31,0,0,306,324,3,48,24,
  	20,307,308,5,47,0,0,308,324,3,48,24,19,309,310,5,37,0,0,310,324,3,48,
  	24,18,311,312,5,50,0,0,312,324,3,48,24,17,313,314,5,51,0,0,314,324,3,
  	48,24,16,315,316,3,40,20,0,316,317,3,52,26,0,317,318,3,48,24,5,318,324,
  	1,0,0,0,319,324,5,5,0,0,320,324,3,50,25,0,321,324,3,54,27,0,322,324,3,
  	46,23,0,323,300,1,0,0,0,323,305,1,0,0,0,323,307,1,0,0,0,323,309,1,0,0,
  	0,323,311,1,0,0,0,323,313,1,0,0,0,323,315,1,0,0,0,323,319,1,0,0,0,323,
  	320,1,0,0,0,323,321,1,0,0,0,323,322,1,0,0,0,324,363,1,0,0,0,325,326,10,
  	22,0,0,326,327,5,29,0,0,327,362,3,48,24,23,328,329,10,15,0,0,329,330,
  	7,2,0,0,330,362,3,48,24,16,331,332,10,14,0,0,332,333,7,3,0,0,333,362,
  	3,48,24,15,334,335,10,13,0,0,335,336,7,4,0,0,336,362,3,48,24,14,337,338,
  	10,12,0,0,338,339,7,5,0,0,339,362,3,48,24,13,340,341,10,11,0,0,341,342,
  	7,6,0,0,342,362,3,48,24,12,343,344,10,10,0,0,344,345,5,44,0,0,345,362,
  	3,48,24,11,346,347,10,9,0,0,347,348,5,46,0,0,348,362,3,48,24,10,349,350,
  	10,8,0,0,350,351,5,45,0,0,351,362,3,48,24,9,352,353,10,7,0,0,353,354,
  	5,35,0,0,354,362,3,48,24,8,355,356,10,6,0,0,356,357,5,36,0,0,357,362,
  	3,48,24,7,358,359,10,21,0,0,359,360,5,26,0,0,360,362,3,38,19,0,361,325,
  	1,0,0,0,361,328,1,0,0,0,361,331,1,0,0,0,361,334,1,0,0,0,361,337,1,0,0,
  	0,361,340,1,0,0,0,361,343,1,0,0,0,361,346,1,0,0,0,361,349,1,0,0,0,361,
  	352,1,0,0,0,361,355,1,0,0,0,361,358,1,0,0,0,362,365,1,0,0,0,363,361,1,
  	0,0,0,363,364,1,0,0,0,364,49,1,0,0,0,365,363,1,0,0,0,366,367,5,4,0,0,
  	367,368,3,40,20,0,368,51,1,0,0,0,369,370,7,7,0,0,370,53,1,0,0,0,371,372,
  	3,56,28,0,372,373,5,26,0,0,373,374,3,58,29,0,374,55,1,0,0,0,375,376,5,
  	69,0,0,376,380,5,52,0,0,377,379,3,22,11,0,378,377,1,0,0,0,379,382,1,0,
  	0,0,380,378,1,0,0,0,380,381,1,0,0,0,381,383,1,0,0,0,382,380,1,0,0,0,383,
  	384,5,53,0,0,384,57,1,0,0,0,385,390,3,60,30,0,386,390,3,62,31,0,387,390,
  	3,2,1,0,388,390,3,48,24,0,389,385,1,0,0,0,389,386,1,0,0,0,389,387,1,0,
  	0,0,389,388,1,0,0,0,390,59,1,0,0,0,391,392,5,54,0,0,392,396,3,2,1,0,393,
  	395,3,2,1,0,394,393,1,0,0,0,395,398,1,0,0,0,396,394,1,0,0,0,396,397,1,
  	0,0,0,397,399,1,0,0,0,398,396,1,0,0,0,399,400,5,55,0,0,400,61,1,0,0,0,
  	401,402,3,38,19,0,402,403,3,60,30,0,403,63,1,0,0,0,37,69,75,90,98,106,
  	111,113,124,131,137,149,157,161,176,182,186,197,204,211,221,225,228,237,
  	241,252,263,266,270,277,290,298,323,361,363,380,389,396
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

std::vector<MikoParserRules::OpenExpressionContext *> MikoParserRules::ProgContext::openExpression() {
  return getRuleContexts<MikoParserRules::OpenExpressionContext>();
}

MikoParserRules::OpenExpressionContext* MikoParserRules::ProgContext::openExpression(size_t i) {
  return getRuleContext<MikoParserRules::OpenExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MikoParserRules::ProgContext::SEMIC() {
  return getTokens(MikoParserRules::SEMIC);
}

tree::TerminalNode* MikoParserRules::ProgContext::SEMIC(size_t i) {
  return getToken(MikoParserRules::SEMIC, i);
}

std::vector<MikoParserRules::StructBodyContext *> MikoParserRules::ProgContext::structBody() {
  return getRuleContexts<MikoParserRules::StructBodyContext>();
}

MikoParserRules::StructBodyContext* MikoParserRules::ProgContext::structBody(size_t i) {
  return getRuleContext<MikoParserRules::StructBodyContext>(i);
}


size_t MikoParserRules::ProgContext::getRuleIndex() const {
  return MikoParserRules::RuleProg;
}

void MikoParserRules::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void MikoParserRules::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
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
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::OPEN) {
      setState(64);
      openExpression();
      setState(65);
      match(MikoParserRules::SEMIC);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2510) != 0)) {
      setState(72);
      structBody();
      setState(77);
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


size_t MikoParserRules::StatementContext::getRuleIndex() const {
  return MikoParserRules::RuleStatement;
}

void MikoParserRules::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MikoParserRules::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
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
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::SEMIC: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        match(MikoParserRules::SEMIC);
        break;
      }

      case MikoParserRules::OPEN:
      case MikoParserRules::THIS:
      case MikoParserRules::ID:
      case MikoParserRules::INT:
      case MikoParserRules::CHAR:
      case MikoParserRules::FLOAT:
      case MikoParserRules::STRING:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::DADD:
      case MikoParserRules::DMIN:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        expression(0);
        setState(80);
        match(MikoParserRules::SEMIC);
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE: {
        enterOuterAlt(_localctx, 3);
        setState(82);
        defineStatement();
        setState(83);
        match(MikoParserRules::SEMIC);
        break;
      }

      case MikoParserRules::IF: {
        enterOuterAlt(_localctx, 4);
        setState(85);
        ifStatement();
        break;
      }

      case MikoParserRules::MATCH: {
        enterOuterAlt(_localctx, 5);
        setState(86);
        matchStatement();
        break;
      }

      case MikoParserRules::FOR: {
        enterOuterAlt(_localctx, 6);
        setState(87);
        forStatement();
        break;
      }

      case MikoParserRules::WHILE: {
        enterOuterAlt(_localctx, 7);
        setState(88);
        whileStatement();
        break;
      }

      case MikoParserRules::RETURN: {
        enterOuterAlt(_localctx, 8);
        setState(89);
        returnStatement();
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

void MikoParserRules::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void MikoParserRules::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
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
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      match(MikoParserRules::IF);
      setState(93);
      match(MikoParserRules::LPAREN);
      setState(94);
      expression(0);
      setState(95);
      match(MikoParserRules::RPAREN);
      setState(98);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(96);
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
        case MikoParserRules::SEMIC:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::DADD:
        case MikoParserRules::DMIN:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(97);
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
      setState(100);
      match(MikoParserRules::IF);
      setState(101);
      match(MikoParserRules::LPAREN);
      setState(102);
      expression(0);
      setState(103);
      match(MikoParserRules::RPAREN);
      setState(106);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(104);
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
        case MikoParserRules::SEMIC:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::DADD:
        case MikoParserRules::DMIN:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(105);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(108);
      match(MikoParserRules::ELSE);
      setState(111);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(109);
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
        case MikoParserRules::SEMIC:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::DADD:
        case MikoParserRules::DMIN:
        case MikoParserRules::LPAREN:
        case MikoParserRules::LAMBDA: {
          setState(110);
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

void MikoParserRules::MatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchStatement(this);
}

void MikoParserRules::MatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchStatement(this);
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
    setState(115);
    match(MikoParserRules::MATCH);
    setState(116);
    match(MikoParserRules::LPAREN);
    setState(117);
    expression(0);
    setState(118);
    match(MikoParserRules::RPAREN);
    setState(119);
    match(MikoParserRules::LBRACE);
    setState(120);
    matchMember();
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(121);
      matchMember();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(127);
    match(MikoParserRules::RBRACE);
    setState(128);
    match(MikoParserRules::ELSE);
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
      case MikoParserRules::SEMIC:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::DADD:
      case MikoParserRules::DMIN:
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

void MikoParserRules::MatchMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchMember(this);
}

void MikoParserRules::MatchMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchMember(this);
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
    setState(133);
    expression(0);
    setState(134);
    match(MikoParserRules::COLON);
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(135);
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
      case MikoParserRules::SEMIC:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::DADD:
      case MikoParserRules::DMIN:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(136);
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

MikoParserRules::DefineContext* MikoParserRules::ForStatementContext::define() {
  return getRuleContext<MikoParserRules::DefineContext>(0);
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


size_t MikoParserRules::ForStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleForStatement;
}

void MikoParserRules::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void MikoParserRules::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

MikoParserRules::ForStatementContext* MikoParserRules::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, MikoParserRules::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(MikoParserRules::FOR);
    setState(140);
    match(MikoParserRules::LPAREN);
    setState(141);
    define();
    setState(142);
    match(MikoParserRules::SEMIC);
    setState(143);
    expression(0);
    setState(144);
    match(MikoParserRules::SEMIC);
    setState(145);
    expression(0);
    setState(146);
    match(MikoParserRules::RPAREN);
    setState(149);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(147);
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
      case MikoParserRules::SEMIC:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::DADD:
      case MikoParserRules::DMIN:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(148);
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

void MikoParserRules::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void MikoParserRules::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
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
    setState(151);
    match(MikoParserRules::WHILE);
    setState(152);
    match(MikoParserRules::LPAREN);
    setState(153);
    expression(0);
    setState(154);
    match(MikoParserRules::RPAREN);
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(155);
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
      case MikoParserRules::SEMIC:
      case MikoParserRules::MIN:
      case MikoParserRules::NOT:
      case MikoParserRules::BITNOT:
      case MikoParserRules::DADD:
      case MikoParserRules::DMIN:
      case MikoParserRules::LPAREN:
      case MikoParserRules::LAMBDA: {
        setState(156);
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

void MikoParserRules::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void MikoParserRules::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
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
    setState(159);
    match(MikoParserRules::RETURN);
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(160);
      expression(0);
    }
    setState(163);
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

tree::TerminalNode* MikoParserRules::AccessKeywordContext::LOCAL() {
  return getToken(MikoParserRules::LOCAL, 0);
}


size_t MikoParserRules::AccessKeywordContext::getRuleIndex() const {
  return MikoParserRules::RuleAccessKeyword;
}

void MikoParserRules::AccessKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessKeyword(this);
}

void MikoParserRules::AccessKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessKeyword(this);
}

MikoParserRules::AccessKeywordContext* MikoParserRules::accessKeyword() {
  AccessKeywordContext *_localctx = _tracker.createInstance<AccessKeywordContext>(_ctx, getState());
  enterRule(_localctx, 16, MikoParserRules::RuleAccessKeyword);
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
    setState(165);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0))) {
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

void MikoParserRules::DefineKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineKeyword(this);
}

void MikoParserRules::DefineKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineKeyword(this);
}

MikoParserRules::DefineKeywordContext* MikoParserRules::defineKeyword() {
  DefineKeywordContext *_localctx = _tracker.createInstance<DefineKeywordContext>(_ctx, getState());
  enterRule(_localctx, 18, MikoParserRules::RuleDefineKeyword);
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
    setState(167);
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

MikoParserRules::DefineContext* MikoParserRules::DefineStatementContext::define() {
  return getRuleContext<MikoParserRules::DefineContext>(0);
}

tree::TerminalNode* MikoParserRules::DefineStatementContext::SEMIC() {
  return getToken(MikoParserRules::SEMIC, 0);
}


size_t MikoParserRules::DefineStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineStatement;
}

void MikoParserRules::DefineStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineStatement(this);
}

void MikoParserRules::DefineStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineStatement(this);
}

MikoParserRules::DefineStatementContext* MikoParserRules::defineStatement() {
  DefineStatementContext *_localctx = _tracker.createInstance<DefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, MikoParserRules::RuleDefineStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    defineKeyword();
    setState(170);
    define();
    setState(171);
    match(MikoParserRules::SEMIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineContext ------------------------------------------------------------------

MikoParserRules::DefineContext::DefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MikoParserRules::DefineExpressionContext *> MikoParserRules::DefineContext::defineExpression() {
  return getRuleContexts<MikoParserRules::DefineExpressionContext>();
}

MikoParserRules::DefineExpressionContext* MikoParserRules::DefineContext::defineExpression(size_t i) {
  return getRuleContext<MikoParserRules::DefineExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineContext::ASS() {
  return getTokens(MikoParserRules::ASS);
}

tree::TerminalNode* MikoParserRules::DefineContext::ASS(size_t i) {
  return getToken(MikoParserRules::ASS, i);
}

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::DefineContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::DefineContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MikoParserRules::DefineContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::DefineContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}


size_t MikoParserRules::DefineContext::getRuleIndex() const {
  return MikoParserRules::RuleDefine;
}

void MikoParserRules::DefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefine(this);
}

void MikoParserRules::DefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefine(this);
}

MikoParserRules::DefineContext* MikoParserRules::define() {
  DefineContext *_localctx = _tracker.createInstance<DefineContext>(_ctx, getState());
  enterRule(_localctx, 22, MikoParserRules::RuleDefine);
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
    setState(173);
    defineExpression();
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::ASS) {
      setState(174);
      match(MikoParserRules::ASS);
      setState(175);
      expression(0);
    }
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(178);
      match(MikoParserRules::COMMA);
      setState(179);
      defineExpression();
      setState(182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MikoParserRules::ASS) {
        setState(180);
        match(MikoParserRules::ASS);
        setState(181);
        expression(0);
      }
      setState(188);
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

MikoParserRules::TypeContext* MikoParserRules::DefineExpressionContext::type() {
  return getRuleContext<MikoParserRules::TypeContext>(0);
}


size_t MikoParserRules::DefineExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineExpression;
}

void MikoParserRules::DefineExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineExpression(this);
}

void MikoParserRules::DefineExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineExpression(this);
}

MikoParserRules::DefineExpressionContext* MikoParserRules::defineExpression() {
  DefineExpressionContext *_localctx = _tracker.createInstance<DefineExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, MikoParserRules::RuleDefineExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(MikoParserRules::ID);
    setState(190);
    match(MikoParserRules::COLON);
    setState(191);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MikoParserRules::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CallContext* MikoParserRules::TypeContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

tree::TerminalNode* MikoParserRules::TypeContext::LBRACK() {
  return getToken(MikoParserRules::LBRACK, 0);
}

tree::TerminalNode* MikoParserRules::TypeContext::RBRACK() {
  return getToken(MikoParserRules::RBRACK, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::TypeContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::StructTypeContext* MikoParserRules::TypeContext::structType() {
  return getRuleContext<MikoParserRules::StructTypeContext>(0);
}

MikoParserRules::DefineEnumContext* MikoParserRules::TypeContext::defineEnum() {
  return getRuleContext<MikoParserRules::DefineEnumContext>(0);
}

MikoParserRules::LambdaExpressionContext* MikoParserRules::TypeContext::lambdaExpression() {
  return getRuleContext<MikoParserRules::LambdaExpressionContext>(0);
}


size_t MikoParserRules::TypeContext::getRuleIndex() const {
  return MikoParserRules::RuleType;
}

void MikoParserRules::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void MikoParserRules::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

MikoParserRules::TypeContext* MikoParserRules::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 26, MikoParserRules::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(193);
      call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      call();
      setState(195);
      match(MikoParserRules::LBRACK);
      setState(197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::LAMBDA) {
        setState(196);
        expression(0);
      }
      setState(199);
      match(MikoParserRules::RBRACK);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(201);
      structType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      defineEnum();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(203);
      lambdaExpression();
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

MikoParserRules::StructBodyContext* MikoParserRules::StructTypeContext::structBody() {
  return getRuleContext<MikoParserRules::StructBodyContext>(0);
}

tree::TerminalNode* MikoParserRules::StructTypeContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

tree::TerminalNode* MikoParserRules::StructTypeContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::CallContext* MikoParserRules::StructTypeContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

tree::TerminalNode* MikoParserRules::StructTypeContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}


size_t MikoParserRules::StructTypeContext::getRuleIndex() const {
  return MikoParserRules::RuleStructType;
}

void MikoParserRules::StructTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructType(this);
}

void MikoParserRules::StructTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructType(this);
}

MikoParserRules::StructTypeContext* MikoParserRules::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, MikoParserRules::RuleStructType);
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
    setState(206);
    match(MikoParserRules::STRUCT);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(207);
      match(MikoParserRules::LPAREN);
      setState(208);
      call();
      setState(209);
      match(MikoParserRules::RPAREN);
    }
    setState(213);
    match(MikoParserRules::LBRACE);
    setState(214);
    structBody();
    setState(215);
    match(MikoParserRules::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructBodyContext ------------------------------------------------------------------

MikoParserRules::StructBodyContext::StructBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MikoParserRules::StructDefineStatementContext *> MikoParserRules::StructBodyContext::structDefineStatement() {
  return getRuleContexts<MikoParserRules::StructDefineStatementContext>();
}

MikoParserRules::StructDefineStatementContext* MikoParserRules::StructBodyContext::structDefineStatement(size_t i) {
  return getRuleContext<MikoParserRules::StructDefineStatementContext>(i);
}


size_t MikoParserRules::StructBodyContext::getRuleIndex() const {
  return MikoParserRules::RuleStructBody;
}

void MikoParserRules::StructBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructBody(this);
}

void MikoParserRules::StructBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructBody(this);
}

MikoParserRules::StructBodyContext* MikoParserRules::structBody() {
  StructBodyContext *_localctx = _tracker.createInstance<StructBodyContext>(_ctx, getState());
  enterRule(_localctx, 30, MikoParserRules::RuleStructBody);

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
    setState(217);
    structDefineStatement();
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(218);
        structDefineStatement(); 
      }
      setState(223);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefineStatementContext ------------------------------------------------------------------

MikoParserRules::StructDefineStatementContext::StructDefineStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::DefineStatementContext* MikoParserRules::StructDefineStatementContext::defineStatement() {
  return getRuleContext<MikoParserRules::DefineStatementContext>(0);
}

MikoParserRules::AccessKeywordContext* MikoParserRules::StructDefineStatementContext::accessKeyword() {
  return getRuleContext<MikoParserRules::AccessKeywordContext>(0);
}

tree::TerminalNode* MikoParserRules::StructDefineStatementContext::STATIC() {
  return getToken(MikoParserRules::STATIC, 0);
}


size_t MikoParserRules::StructDefineStatementContext::getRuleIndex() const {
  return MikoParserRules::RuleStructDefineStatement;
}

void MikoParserRules::StructDefineStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefineStatement(this);
}

void MikoParserRules::StructDefineStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefineStatement(this);
}

MikoParserRules::StructDefineStatementContext* MikoParserRules::structDefineStatement() {
  StructDefineStatementContext *_localctx = _tracker.createInstance<StructDefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, MikoParserRules::RuleStructDefineStatement);
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
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(224);
      accessKeyword();
    }
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::STATIC) {
      setState(227);
      match(MikoParserRules::STATIC);
    }
    setState(230);
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

MikoParserRules::EnumBodyContext* MikoParserRules::DefineEnumContext::enumBody() {
  return getRuleContext<MikoParserRules::EnumBodyContext>(0);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::RBRACE() {
  return getToken(MikoParserRules::RBRACE, 0);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::CallContext* MikoParserRules::DefineEnumContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

tree::TerminalNode* MikoParserRules::DefineEnumContext::COLON() {
  return getToken(MikoParserRules::COLON, 0);
}

MikoParserRules::TypeContext* MikoParserRules::DefineEnumContext::type() {
  return getRuleContext<MikoParserRules::TypeContext>(0);
}


size_t MikoParserRules::DefineEnumContext::getRuleIndex() const {
  return MikoParserRules::RuleDefineEnum;
}

void MikoParserRules::DefineEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineEnum(this);
}

void MikoParserRules::DefineEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineEnum(this);
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
    setState(232);
    match(MikoParserRules::ENUM);
    setState(237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(233);
      match(MikoParserRules::LPAREN);
      setState(234);
      call();
      setState(235);
      match(MikoParserRules::RPAREN);
    }
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::COLON) {
      setState(239);
      match(MikoParserRules::COLON);
      setState(240);
      type();
    }
    setState(243);
    match(MikoParserRules::LBRACE);
    setState(244);
    enumBody();
    setState(245);
    match(MikoParserRules::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

MikoParserRules::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MikoParserRules::EnumBodyContext::ID() {
  return getTokens(MikoParserRules::ID);
}

tree::TerminalNode* MikoParserRules::EnumBodyContext::ID(size_t i) {
  return getToken(MikoParserRules::ID, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::EnumBodyContext::COMMA() {
  return getTokens(MikoParserRules::COMMA);
}

tree::TerminalNode* MikoParserRules::EnumBodyContext::COMMA(size_t i) {
  return getToken(MikoParserRules::COMMA, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::EnumBodyContext::ASS() {
  return getTokens(MikoParserRules::ASS);
}

tree::TerminalNode* MikoParserRules::EnumBodyContext::ASS(size_t i) {
  return getToken(MikoParserRules::ASS, i);
}

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::EnumBodyContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::EnumBodyContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}


size_t MikoParserRules::EnumBodyContext::getRuleIndex() const {
  return MikoParserRules::RuleEnumBody;
}

void MikoParserRules::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void MikoParserRules::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}

MikoParserRules::EnumBodyContext* MikoParserRules::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 36, MikoParserRules::RuleEnumBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(247);
      match(MikoParserRules::ID);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::COMMA) {
        setState(248);
        match(MikoParserRules::COMMA);
        setState(249);
        match(MikoParserRules::ID);
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(255);
      match(MikoParserRules::ID);
      setState(256);
      match(MikoParserRules::ASS);
      setState(257);
      expression(0);
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::ID) {
        setState(258);
        match(MikoParserRules::ID);
        setState(259);
        match(MikoParserRules::ASS);
        setState(260);
        expression(0);
        setState(265);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- CallContext ------------------------------------------------------------------

MikoParserRules::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CallFunctionContext* MikoParserRules::CallContext::callFunction() {
  return getRuleContext<MikoParserRules::CallFunctionContext>(0);
}

MikoParserRules::CallIdentifierContext* MikoParserRules::CallContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
}


size_t MikoParserRules::CallContext::getRuleIndex() const {
  return MikoParserRules::RuleCall;
}

void MikoParserRules::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void MikoParserRules::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

MikoParserRules::CallContext* MikoParserRules::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 38, MikoParserRules::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(268);
      callFunction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      callIdentifier();
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

//----------------- CallIdentifierContext ------------------------------------------------------------------

MikoParserRules::CallIdentifierContext::CallIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MikoParserRules::CallIdentifierContext::ID() {
  return getTokens(MikoParserRules::ID);
}

tree::TerminalNode* MikoParserRules::CallIdentifierContext::ID(size_t i) {
  return getToken(MikoParserRules::ID, i);
}

std::vector<tree::TerminalNode *> MikoParserRules::CallIdentifierContext::DOT() {
  return getTokens(MikoParserRules::DOT);
}

tree::TerminalNode* MikoParserRules::CallIdentifierContext::DOT(size_t i) {
  return getToken(MikoParserRules::DOT, i);
}


size_t MikoParserRules::CallIdentifierContext::getRuleIndex() const {
  return MikoParserRules::RuleCallIdentifier;
}

void MikoParserRules::CallIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallIdentifier(this);
}

void MikoParserRules::CallIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallIdentifier(this);
}

MikoParserRules::CallIdentifierContext* MikoParserRules::callIdentifier() {
  CallIdentifierContext *_localctx = _tracker.createInstance<CallIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 40, MikoParserRules::RuleCallIdentifier);

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
    setState(272);
    match(MikoParserRules::ID);
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(273);
        match(MikoParserRules::DOT);
        setState(274);
        match(MikoParserRules::ID); 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallFunctionContext ------------------------------------------------------------------

MikoParserRules::CallFunctionContext::CallFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::CallFunctionContext::ID() {
  return getToken(MikoParserRules::ID, 0);
}

tree::TerminalNode* MikoParserRules::CallFunctionContext::LPAREN() {
  return getToken(MikoParserRules::LPAREN, 0);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::CallFunctionContext::functionArgs() {
  return getRuleContext<MikoParserRules::FunctionArgsContext>(0);
}

tree::TerminalNode* MikoParserRules::CallFunctionContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}


size_t MikoParserRules::CallFunctionContext::getRuleIndex() const {
  return MikoParserRules::RuleCallFunction;
}

void MikoParserRules::CallFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallFunction(this);
}

void MikoParserRules::CallFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallFunction(this);
}

MikoParserRules::CallFunctionContext* MikoParserRules::callFunction() {
  CallFunctionContext *_localctx = _tracker.createInstance<CallFunctionContext>(_ctx, getState());
  enterRule(_localctx, 42, MikoParserRules::RuleCallFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(MikoParserRules::ID);
    setState(281);
    match(MikoParserRules::LPAREN);
    setState(282);
    functionArgs();
    setState(283);
    match(MikoParserRules::RPAREN);
   
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

void MikoParserRules::FunctionArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionArgs(this);
}

void MikoParserRules::FunctionArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionArgs(this);
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
    setState(285);
    expression(0);
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(286);
      match(MikoParserRules::COMMA);
      setState(287);
      expression(0);
      setState(292);
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

void MikoParserRules::AtomExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomExpression(this);
}

void MikoParserRules::AtomExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomExpression(this);
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
    setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::ID: {
        enterOuterAlt(_localctx, 1);
        setState(293);
        call();
        break;
      }

      case MikoParserRules::INT: {
        enterOuterAlt(_localctx, 2);
        setState(294);
        match(MikoParserRules::INT);
        break;
      }

      case MikoParserRules::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(295);
        match(MikoParserRules::FLOAT);
        break;
      }

      case MikoParserRules::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(296);
        match(MikoParserRules::CHAR);
        break;
      }

      case MikoParserRules::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(297);
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

void MikoParserRules::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void MikoParserRules::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
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

void MikoParserRules::ParentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParent(this);
}
void MikoParserRules::ParentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParent(this);
}
//----------------- MinusContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::MinusContext::MIN() {
  return getToken(MikoParserRules::MIN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::MinusContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::MinusContext::MinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::MinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinus(this);
}
void MikoParserRules::MinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinus(this);
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

void MikoParserRules::LogicBoSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicBoS(this);
}
void MikoParserRules::LogicBoSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicBoS(this);
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

void MikoParserRules::BitOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOr(this);
}
void MikoParserRules::BitOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOr(this);
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

void MikoParserRules::LogicOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicOr(this);
}
void MikoParserRules::LogicOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicOr(this);
}
//----------------- ThisContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::ThisContext::THIS() {
  return getToken(MikoParserRules::THIS, 0);
}

MikoParserRules::ThisContext::ThisContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::ThisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThis(this);
}
void MikoParserRules::ThisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThis(this);
}
//----------------- DotContext ------------------------------------------------------------------

MikoParserRules::ExpressionContext* MikoParserRules::DotContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

tree::TerminalNode* MikoParserRules::DotContext::DOT() {
  return getToken(MikoParserRules::DOT, 0);
}

MikoParserRules::CallContext* MikoParserRules::DotContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

MikoParserRules::DotContext::DotContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::DotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDot(this);
}
void MikoParserRules::DotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDot(this);
}
//----------------- IncrementContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::IncrementContext::DADD() {
  return getToken(MikoParserRules::DADD, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::IncrementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::IncrementContext::IncrementContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::IncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrement(this);
}
void MikoParserRules::IncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrement(this);
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

void MikoParserRules::BitshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitshift(this);
}
void MikoParserRules::BitshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitshift(this);
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

void MikoParserRules::LogicEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicEq(this);
}
void MikoParserRules::LogicEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicEq(this);
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

void MikoParserRules::MultiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti(this);
}
void MikoParserRules::MultiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti(this);
}
//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::NotContext::NOT() {
  return getToken(MikoParserRules::NOT, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::NotContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::NotContext::NotContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void MikoParserRules::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}
//----------------- LambdaContext ------------------------------------------------------------------

MikoParserRules::LambdaExpressionContext* MikoParserRules::LambdaContext::lambdaExpression() {
  return getRuleContext<MikoParserRules::LambdaExpressionContext>(0);
}

MikoParserRules::LambdaContext::LambdaContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::LambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda(this);
}
void MikoParserRules::LambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda(this);
}
//----------------- CommaContext ------------------------------------------------------------------

std::vector<MikoParserRules::ExpressionContext *> MikoParserRules::CommaContext::expression() {
  return getRuleContexts<MikoParserRules::ExpressionContext>();
}

MikoParserRules::ExpressionContext* MikoParserRules::CommaContext::expression(size_t i) {
  return getRuleContext<MikoParserRules::ExpressionContext>(i);
}

tree::TerminalNode* MikoParserRules::CommaContext::COMMA() {
  return getToken(MikoParserRules::COMMA, 0);
}

MikoParserRules::CommaContext::CommaContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::CommaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComma(this);
}
void MikoParserRules::CommaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComma(this);
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

void MikoParserRules::BitAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAnd(this);
}
void MikoParserRules::BitAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAnd(this);
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

void MikoParserRules::LogicAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicAnd(this);
}
void MikoParserRules::LogicAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicAnd(this);
}
//----------------- NegateContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::NegateContext::BITNOT() {
  return getToken(MikoParserRules::BITNOT, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::NegateContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::NegateContext::NegateContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::NegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegate(this);
}
void MikoParserRules::NegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegate(this);
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

void MikoParserRules::BitXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXor(this);
}
void MikoParserRules::BitXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXor(this);
}
//----------------- DecrmentContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::DecrmentContext::DMIN() {
  return getToken(MikoParserRules::DMIN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::DecrmentContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::DecrmentContext::DecrmentContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::DecrmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrment(this);
}
void MikoParserRules::DecrmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrment(this);
}
//----------------- AtomContext ------------------------------------------------------------------

MikoParserRules::AtomExpressionContext* MikoParserRules::AtomContext::atomExpression() {
  return getRuleContext<MikoParserRules::AtomExpressionContext>(0);
}

MikoParserRules::AtomContext::AtomContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}
void MikoParserRules::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}
//----------------- OpenContext ------------------------------------------------------------------

MikoParserRules::OpenExpressionContext* MikoParserRules::OpenContext::openExpression() {
  return getRuleContext<MikoParserRules::OpenExpressionContext>(0);
}

MikoParserRules::OpenContext::OpenContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::OpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpen(this);
}
void MikoParserRules::OpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpen(this);
}
//----------------- AssignContext ------------------------------------------------------------------

MikoParserRules::CallIdentifierContext* MikoParserRules::AssignContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
}

MikoParserRules::AssignmentOperatorContext* MikoParserRules::AssignContext::assignmentOperator() {
  return getRuleContext<MikoParserRules::AssignmentOperatorContext>(0);
}

MikoParserRules::ExpressionContext* MikoParserRules::AssignContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
}

MikoParserRules::AssignContext::AssignContext(ExpressionContext *ctx) { copyFrom(ctx); }

void MikoParserRules::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void MikoParserRules::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
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
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(301);
      match(MikoParserRules::LPAREN);
      setState(302);
      expression(0);
      setState(303);
      match(MikoParserRules::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(305);
      match(MikoParserRules::MIN);
      setState(306);
      expression(20);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(307);
      match(MikoParserRules::BITNOT);
      setState(308);
      expression(19);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(309);
      match(MikoParserRules::NOT);
      setState(310);
      expression(18);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IncrementContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(311);
      match(MikoParserRules::DADD);
      setState(312);
      expression(17);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<DecrmentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(313);
      match(MikoParserRules::DMIN);
      setState(314);
      expression(16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<AssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(315);
      callIdentifier();
      setState(316);
      assignmentOperator();
      setState(317);
      expression(5);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ThisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(319);
      match(MikoParserRules::THIS);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<OpenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(320);
      openExpression();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<LambdaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(321);
      lambdaExpression();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<AtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(322);
      atomExpression();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(363);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(361);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<CommaContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(325);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(326);
          match(MikoParserRules::COMMA);
          setState(327);
          expression(23);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(328);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(329);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 30064771072) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(330);
          expression(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(331);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(332);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::ADD

          || _la == MikoParserRules::MIN)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(333);
          expression(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BitshiftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(334);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(335);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::LSHIFT

          || _la == MikoParserRules::RSHIFT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(336);
          expression(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LogicBoSContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(337);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(338);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4123168604160) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(339);
          expression(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicEqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(340);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(341);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::DOB_EQ

          || _la == MikoParserRules::NOT_EQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(342);
          expression(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(343);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(344);
          match(MikoParserRules::BITAND);
          setState(345);
          expression(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(346);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(347);
          match(MikoParserRules::BITXOR);
          setState(348);
          expression(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(349);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(350);
          match(MikoParserRules::BITOR);
          setState(351);
          expression(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(352);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(353);
          match(MikoParserRules::AND);
          setState(354);
          expression(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(355);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(356);
          match(MikoParserRules::OR);
          setState(357);
          expression(7);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<DotContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(358);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(359);
          match(MikoParserRules::DOT);
          setState(360);
          call();
          break;
        }

        default:
          break;
        } 
      }
      setState(365);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
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

MikoParserRules::CallIdentifierContext* MikoParserRules::OpenExpressionContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
}


size_t MikoParserRules::OpenExpressionContext::getRuleIndex() const {
  return MikoParserRules::RuleOpenExpression;
}

void MikoParserRules::OpenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpenExpression(this);
}

void MikoParserRules::OpenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpenExpression(this);
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
    enterOuterAlt(_localctx, 1);
    setState(366);
    match(MikoParserRules::OPEN);
    setState(367);
    callIdentifier();
   
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

void MikoParserRules::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void MikoParserRules::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
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
    setState(369);
    _la = _input->LA(1);
    if (!(((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & 2047) != 0))) {
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

void MikoParserRules::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void MikoParserRules::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
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
    setState(371);
    lambdaHead();
    setState(372);
    match(MikoParserRules::DOT);
    setState(373);
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

tree::TerminalNode* MikoParserRules::LambdaHeadContext::RPAREN() {
  return getToken(MikoParserRules::RPAREN, 0);
}

std::vector<MikoParserRules::DefineContext *> MikoParserRules::LambdaHeadContext::define() {
  return getRuleContexts<MikoParserRules::DefineContext>();
}

MikoParserRules::DefineContext* MikoParserRules::LambdaHeadContext::define(size_t i) {
  return getRuleContext<MikoParserRules::DefineContext>(i);
}


size_t MikoParserRules::LambdaHeadContext::getRuleIndex() const {
  return MikoParserRules::RuleLambdaHead;
}

void MikoParserRules::LambdaHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaHead(this);
}

void MikoParserRules::LambdaHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaHead(this);
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
    setState(375);
    match(MikoParserRules::LAMBDA);
    setState(376);
    match(MikoParserRules::LPAREN);
    setState(380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::ID) {
      setState(377);
      define();
      setState(382);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(383);
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

void MikoParserRules::LambdaBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaBody(this);
}

void MikoParserRules::LambdaBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaBody(this);
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
    setState(389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(385);
      codeBlock();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(386);
      returncodeBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(387);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(388);
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

void MikoParserRules::CodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCodeBlock(this);
}

void MikoParserRules::CodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCodeBlock(this);
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
    setState(391);
    match(MikoParserRules::LBRACE);
    setState(392);
    statement();
    setState(396);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176623153214) != 0) || _la == MikoParserRules::LAMBDA) {
      setState(393);
      statement();
      setState(398);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(399);
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

MikoParserRules::CallContext* MikoParserRules::ReturncodeBlockContext::call() {
  return getRuleContext<MikoParserRules::CallContext>(0);
}

MikoParserRules::CodeBlockContext* MikoParserRules::ReturncodeBlockContext::codeBlock() {
  return getRuleContext<MikoParserRules::CodeBlockContext>(0);
}


size_t MikoParserRules::ReturncodeBlockContext::getRuleIndex() const {
  return MikoParserRules::RuleReturncodeBlock;
}

void MikoParserRules::ReturncodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturncodeBlock(this);
}

void MikoParserRules::ReturncodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MikoParserRulesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturncodeBlock(this);
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
    setState(401);
    call();
    setState(402);
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
    case 0: return precpred(_ctx, 22);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 21);

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
