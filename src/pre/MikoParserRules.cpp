
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
      "accessKeyword", "defineKeyword", "defineStatement", "define", "defineExpression", 
      "type", "structType", "structBody", "structDefineStatement", "defineEnum", 
      "enumBody", "call", "compilerCall", "programCall", "callIdentifier", 
      "callFunction", "functionArgs", "atomExpression", "expression", "openExpression", 
      "assignmentOperator", "lambdaExpression", "lambdaHead", "lambdaBody", 
      "codeBlock", "returncodeBlock"
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
      "'^='", "'|='", "'@'", "'\\'"
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
      "BITOR_ASS", "COMPILER", "LAMBDA", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,71,422,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,5,
  	0,72,8,0,10,0,12,0,75,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,90,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,98,8,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,106,8,2,1,2,1,2,1,2,3,2,111,8,2,3,2,113,8,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,5,3,122,8,3,10,3,12,3,125,9,3,1,3,1,3,1,3,1,3,3,3,131,8,
  	3,1,4,1,4,1,4,1,4,3,4,137,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	3,5,149,8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,157,8,6,1,7,1,7,3,7,161,8,7,1,
  	7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,3,12,180,8,12,1,12,1,12,1,12,1,12,3,12,186,8,12,5,12,188,8,12,10,
  	12,12,12,191,9,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,3,14,201,8,
  	14,1,14,1,14,1,14,1,14,1,14,3,14,208,8,14,1,15,1,15,1,15,1,15,1,15,3,
  	15,215,8,15,1,15,1,15,1,15,1,15,1,16,1,16,3,16,223,8,16,1,16,1,16,5,16,
  	227,8,16,10,16,12,16,230,9,16,1,17,3,17,233,8,17,1,17,3,17,236,8,17,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,3,18,245,8,18,1,18,1,18,3,18,249,8,18,
  	1,18,1,18,1,18,1,18,1,19,1,19,1,19,5,19,258,8,19,10,19,12,19,261,9,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,5,19,269,8,19,10,19,12,19,272,9,19,3,19,
  	274,8,19,1,20,1,20,3,20,278,8,20,1,21,1,21,1,21,1,21,3,21,284,8,21,1,
  	22,1,22,3,22,288,8,22,1,23,1,23,1,23,5,23,293,8,23,10,23,12,23,296,9,
  	23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,5,25,306,8,25,10,25,12,25,
  	309,9,25,1,26,1,26,1,26,1,26,1,26,3,26,316,8,26,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,3,27,341,8,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,5,27,379,8,27,10,27,12,27,382,9,27,1,28,1,28,1,28,1,29,1,29,1,
  	30,1,30,1,30,1,30,1,31,1,31,1,31,5,31,396,8,31,10,31,12,31,399,9,31,1,
  	31,1,31,1,32,1,32,1,32,1,32,3,32,407,8,32,1,33,1,33,1,33,5,33,412,8,33,
  	10,33,12,33,415,9,33,1,33,1,33,1,34,1,34,1,34,1,34,0,1,54,35,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,0,8,1,0,6,8,1,0,1,3,1,0,32,34,1,0,30,31,1,0,48,49,
  	1,0,38,41,1,0,42,43,1,0,58,68,460,0,73,1,0,0,0,2,89,1,0,0,0,4,112,1,0,
  	0,0,6,114,1,0,0,0,8,132,1,0,0,0,10,138,1,0,0,0,12,150,1,0,0,0,14,158,
  	1,0,0,0,16,164,1,0,0,0,18,168,1,0,0,0,20,170,1,0,0,0,22,172,1,0,0,0,24,
  	176,1,0,0,0,26,192,1,0,0,0,28,207,1,0,0,0,30,209,1,0,0,0,32,222,1,0,0,
  	0,34,232,1,0,0,0,36,239,1,0,0,0,38,273,1,0,0,0,40,277,1,0,0,0,42,283,
  	1,0,0,0,44,287,1,0,0,0,46,289,1,0,0,0,48,297,1,0,0,0,50,302,1,0,0,0,52,
  	315,1,0,0,0,54,340,1,0,0,0,56,383,1,0,0,0,58,386,1,0,0,0,60,388,1,0,0,
  	0,62,392,1,0,0,0,64,406,1,0,0,0,66,408,1,0,0,0,68,418,1,0,0,0,70,72,3,
  	32,16,0,71,70,1,0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,1,
  	1,0,0,0,75,73,1,0,0,0,76,90,5,27,0,0,77,78,3,54,27,0,78,79,5,27,0,0,79,
  	90,1,0,0,0,80,81,3,22,11,0,81,82,5,27,0,0,82,90,1,0,0,0,83,90,3,4,2,0,
  	84,90,3,6,3,0,85,90,3,10,5,0,86,90,3,12,6,0,87,90,3,14,7,0,88,90,3,16,
  	8,0,89,76,1,0,0,0,89,77,1,0,0,0,89,80,1,0,0,0,89,83,1,0,0,0,89,84,1,0,
  	0,0,89,85,1,0,0,0,89,86,1,0,0,0,89,87,1,0,0,0,89,88,1,0,0,0,90,3,1,0,
  	0,0,91,92,5,12,0,0,92,93,5,52,0,0,93,94,3,54,27,0,94,97,5,53,0,0,95,98,
  	3,66,33,0,96,98,3,2,1,0,97,95,1,0,0,0,97,96,1,0,0,0,98,113,1,0,0,0,99,
  	100,5,12,0,0,100,101,5,52,0,0,101,102,3,54,27,0,102,105,5,53,0,0,103,
  	106,3,66,33,0,104,106,3,2,1,0,105,103,1,0,0,0,105,104,1,0,0,0,106,107,
  	1,0,0,0,107,110,5,13,0,0,108,111,3,66,33,0,109,111,3,2,1,0,110,108,1,
  	0,0,0,110,109,1,0,0,0,111,113,1,0,0,0,112,91,1,0,0,0,112,99,1,0,0,0,113,
  	5,1,0,0,0,114,115,5,14,0,0,115,116,5,52,0,0,116,117,3,54,27,0,117,118,
  	5,53,0,0,118,119,5,54,0,0,119,123,3,8,4,0,120,122,3,8,4,0,121,120,1,0,
  	0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,
  	123,1,0,0,0,126,127,5,55,0,0,127,130,5,13,0,0,128,131,3,66,33,0,129,131,
  	3,2,1,0,130,128,1,0,0,0,130,129,1,0,0,0,131,7,1,0,0,0,132,133,3,54,27,
  	0,133,136,5,28,0,0,134,137,3,66,33,0,135,137,3,2,1,0,136,134,1,0,0,0,
  	136,135,1,0,0,0,137,9,1,0,0,0,138,139,5,15,0,0,139,140,5,52,0,0,140,141,
  	3,24,12,0,141,142,5,27,0,0,142,143,3,54,27,0,143,144,5,27,0,0,144,145,
  	3,54,27,0,145,148,5,53,0,0,146,149,3,66,33,0,147,149,3,2,1,0,148,146,
  	1,0,0,0,148,147,1,0,0,0,149,11,1,0,0,0,150,151,5,17,0,0,151,152,5,52,
  	0,0,152,153,3,54,27,0,153,156,5,53,0,0,154,157,3,66,33,0,155,157,3,2,
  	1,0,156,154,1,0,0,0,156,155,1,0,0,0,157,13,1,0,0,0,158,160,5,20,0,0,159,
  	161,3,54,27,0,160,159,1,0,0,0,160,161,1,0,0,0,161,162,1,0,0,0,162,163,
  	5,27,0,0,163,15,1,0,0,0,164,165,5,4,0,0,165,166,3,54,27,0,166,167,5,27,
  	0,0,167,17,1,0,0,0,168,169,7,0,0,0,169,19,1,0,0,0,170,171,7,1,0,0,171,
  	21,1,0,0,0,172,173,3,20,10,0,173,174,3,24,12,0,174,175,5,27,0,0,175,23,
  	1,0,0,0,176,179,3,26,13,0,177,178,5,58,0,0,178,180,3,54,27,0,179,177,
  	1,0,0,0,179,180,1,0,0,0,180,189,1,0,0,0,181,182,5,29,0,0,182,185,3,26,
  	13,0,183,184,5,58,0,0,184,186,3,54,27,0,185,183,1,0,0,0,185,186,1,0,0,
  	0,186,188,1,0,0,0,187,181,1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,
  	190,1,0,0,0,190,25,1,0,0,0,191,189,1,0,0,0,192,193,5,21,0,0,193,194,5,
  	28,0,0,194,195,3,28,14,0,195,27,1,0,0,0,196,208,3,40,20,0,197,198,3,40,
  	20,0,198,200,5,56,0,0,199,201,3,54,27,0,200,199,1,0,0,0,200,201,1,0,0,
  	0,201,202,1,0,0,0,202,203,5,57,0,0,203,208,1,0,0,0,204,208,3,30,15,0,
  	205,208,3,36,18,0,206,208,3,60,30,0,207,196,1,0,0,0,207,197,1,0,0,0,207,
  	204,1,0,0,0,207,205,1,0,0,0,207,206,1,0,0,0,208,29,1,0,0,0,209,214,5,
  	10,0,0,210,211,5,52,0,0,211,212,3,40,20,0,212,213,5,53,0,0,213,215,1,
  	0,0,0,214,210,1,0,0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,217,5,54,0,
  	0,217,218,3,32,16,0,218,219,5,55,0,0,219,31,1,0,0,0,220,223,3,16,8,0,
  	221,223,3,34,17,0,222,220,1,0,0,0,222,221,1,0,0,0,223,228,1,0,0,0,224,
  	227,3,16,8,0,225,227,3,34,17,0,226,224,1,0,0,0,226,225,1,0,0,0,227,230,
  	1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,33,1,0,0,0,230,228,1,0,0,
  	0,231,233,3,18,9,0,232,231,1,0,0,0,232,233,1,0,0,0,233,235,1,0,0,0,234,
  	236,5,11,0,0,235,234,1,0,0,0,235,236,1,0,0,0,236,237,1,0,0,0,237,238,
  	3,22,11,0,238,35,1,0,0,0,239,244,5,9,0,0,240,241,5,52,0,0,241,242,3,40,
  	20,0,242,243,5,53,0,0,243,245,1,0,0,0,244,240,1,0,0,0,244,245,1,0,0,0,
  	245,248,1,0,0,0,246,247,5,28,0,0,247,249,3,28,14,0,248,246,1,0,0,0,248,
  	249,1,0,0,0,249,250,1,0,0,0,250,251,5,54,0,0,251,252,3,38,19,0,252,253,
  	5,55,0,0,253,37,1,0,0,0,254,259,5,21,0,0,255,256,5,29,0,0,256,258,5,21,
  	0,0,257,255,1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,
  	274,1,0,0,0,261,259,1,0,0,0,262,263,5,21,0,0,263,264,5,58,0,0,264,270,
  	3,54,27,0,265,266,5,21,0,0,266,267,5,58,0,0,267,269,3,54,27,0,268,265,
  	1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,270,271,1,0,0,0,271,274,1,0,0,
  	0,272,270,1,0,0,0,273,254,1,0,0,0,273,262,1,0,0,0,274,39,1,0,0,0,275,
  	278,3,42,21,0,276,278,3,44,22,0,277,275,1,0,0,0,277,276,1,0,0,0,278,41,
  	1,0,0,0,279,280,5,69,0,0,280,284,3,48,24,0,281,282,5,69,0,0,282,284,3,
  	46,23,0,283,279,1,0,0,0,283,281,1,0,0,0,284,43,1,0,0,0,285,288,3,48,24,
  	0,286,288,3,46,23,0,287,285,1,0,0,0,287,286,1,0,0,0,288,45,1,0,0,0,289,
  	294,5,21,0,0,290,291,5,26,0,0,291,293,5,21,0,0,292,290,1,0,0,0,293,296,
  	1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,47,1,0,0,0,296,294,1,0,0,
  	0,297,298,5,21,0,0,298,299,5,52,0,0,299,300,3,50,25,0,300,301,5,53,0,
  	0,301,49,1,0,0,0,302,307,3,54,27,0,303,304,5,29,0,0,304,306,3,54,27,0,
  	305,303,1,0,0,0,306,309,1,0,0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,51,
  	1,0,0,0,309,307,1,0,0,0,310,316,3,40,20,0,311,316,5,22,0,0,312,316,5,
  	24,0,0,313,316,5,23,0,0,314,316,5,25,0,0,315,310,1,0,0,0,315,311,1,0,
  	0,0,315,312,1,0,0,0,315,313,1,0,0,0,315,314,1,0,0,0,316,53,1,0,0,0,317,
  	318,6,27,-1,0,318,319,5,52,0,0,319,320,3,54,27,0,320,321,5,53,0,0,321,
  	341,1,0,0,0,322,323,5,31,0,0,323,341,3,54,27,20,324,325,5,47,0,0,325,
  	341,3,54,27,19,326,327,5,37,0,0,327,341,3,54,27,18,328,329,5,50,0,0,329,
  	341,3,54,27,17,330,331,5,51,0,0,331,341,3,54,27,16,332,333,3,46,23,0,
  	333,334,3,58,29,0,334,335,3,54,27,5,335,341,1,0,0,0,336,341,5,5,0,0,337,
  	341,3,56,28,0,338,341,3,60,30,0,339,341,3,52,26,0,340,317,1,0,0,0,340,
  	322,1,0,0,0,340,324,1,0,0,0,340,326,1,0,0,0,340,328,1,0,0,0,340,330,1,
  	0,0,0,340,332,1,0,0,0,340,336,1,0,0,0,340,337,1,0,0,0,340,338,1,0,0,0,
  	340,339,1,0,0,0,341,380,1,0,0,0,342,343,10,22,0,0,343,344,5,29,0,0,344,
  	379,3,54,27,23,345,346,10,15,0,0,346,347,7,2,0,0,347,379,3,54,27,16,348,
  	349,10,14,0,0,349,350,7,3,0,0,350,379,3,54,27,15,351,352,10,13,0,0,352,
  	353,7,4,0,0,353,379,3,54,27,14,354,355,10,12,0,0,355,356,7,5,0,0,356,
  	379,3,54,27,13,357,358,10,11,0,0,358,359,7,6,0,0,359,379,3,54,27,12,360,
  	361,10,10,0,0,361,362,5,44,0,0,362,379,3,54,27,11,363,364,10,9,0,0,364,
  	365,5,46,0,0,365,379,3,54,27,10,366,367,10,8,0,0,367,368,5,45,0,0,368,
  	379,3,54,27,9,369,370,10,7,0,0,370,371,5,35,0,0,371,379,3,54,27,8,372,
  	373,10,6,0,0,373,374,5,36,0,0,374,379,3,54,27,7,375,376,10,21,0,0,376,
  	377,5,26,0,0,377,379,3,40,20,0,378,342,1,0,0,0,378,345,1,0,0,0,378,348,
  	1,0,0,0,378,351,1,0,0,0,378,354,1,0,0,0,378,357,1,0,0,0,378,360,1,0,0,
  	0,378,363,1,0,0,0,378,366,1,0,0,0,378,369,1,0,0,0,378,372,1,0,0,0,378,
  	375,1,0,0,0,379,382,1,0,0,0,380,378,1,0,0,0,380,381,1,0,0,0,381,55,1,
  	0,0,0,382,380,1,0,0,0,383,384,5,4,0,0,384,385,3,46,23,0,385,57,1,0,0,
  	0,386,387,7,7,0,0,387,59,1,0,0,0,388,389,3,62,31,0,389,390,5,26,0,0,390,
  	391,3,64,32,0,391,61,1,0,0,0,392,393,5,70,0,0,393,397,5,52,0,0,394,396,
  	3,24,12,0,395,394,1,0,0,0,396,399,1,0,0,0,397,395,1,0,0,0,397,398,1,0,
  	0,0,398,400,1,0,0,0,399,397,1,0,0,0,400,401,5,53,0,0,401,63,1,0,0,0,402,
  	407,3,66,33,0,403,407,3,68,34,0,404,407,3,2,1,0,405,407,3,54,27,0,406,
  	402,1,0,0,0,406,403,1,0,0,0,406,404,1,0,0,0,406,405,1,0,0,0,407,65,1,
  	0,0,0,408,409,5,54,0,0,409,413,3,2,1,0,410,412,3,2,1,0,411,410,1,0,0,
  	0,412,415,1,0,0,0,413,411,1,0,0,0,413,414,1,0,0,0,414,416,1,0,0,0,415,
  	413,1,0,0,0,416,417,5,55,0,0,417,67,1,0,0,0,418,419,3,28,14,0,419,420,
  	3,66,33,0,420,69,1,0,0,0,40,73,89,97,105,110,112,123,130,136,148,156,
  	160,179,185,189,200,207,214,222,226,228,232,235,244,248,259,270,273,277,
  	283,287,294,307,315,340,378,380,397,406,413
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

std::vector<MikoParserRules::StructBodyContext *> MikoParserRules::ProgContext::structBody() {
  return getRuleContexts<MikoParserRules::StructBodyContext>();
}

MikoParserRules::StructBodyContext* MikoParserRules::ProgContext::structBody(size_t i) {
  return getRuleContext<MikoParserRules::StructBodyContext>(i);
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
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2526) != 0)) {
      setState(70);
      structBody();
      setState(75);
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
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(76);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      expression(0);
      setState(78);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(80);
      defineStatement();
      setState(81);
      match(MikoParserRules::SEMIC);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(83);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(84);
      matchStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(85);
      forStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(86);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(87);
      returnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(88);
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
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      match(MikoParserRules::IF);
      setState(92);
      match(MikoParserRules::LPAREN);
      setState(93);
      expression(0);
      setState(94);
      match(MikoParserRules::RPAREN);
      setState(97);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(95);
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
        case MikoParserRules::COMPILER:
        case MikoParserRules::LAMBDA: {
          setState(96);
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
      setState(99);
      match(MikoParserRules::IF);
      setState(100);
      match(MikoParserRules::LPAREN);
      setState(101);
      expression(0);
      setState(102);
      match(MikoParserRules::RPAREN);
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
        case MikoParserRules::SEMIC:
        case MikoParserRules::MIN:
        case MikoParserRules::NOT:
        case MikoParserRules::BITNOT:
        case MikoParserRules::DADD:
        case MikoParserRules::DMIN:
        case MikoParserRules::LPAREN:
        case MikoParserRules::COMPILER:
        case MikoParserRules::LAMBDA: {
          setState(104);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(107);
      match(MikoParserRules::ELSE);
      setState(110);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MikoParserRules::LBRACE: {
          setState(108);
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
        case MikoParserRules::COMPILER:
        case MikoParserRules::LAMBDA: {
          setState(109);
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
    setState(114);
    match(MikoParserRules::MATCH);
    setState(115);
    match(MikoParserRules::LPAREN);
    setState(116);
    expression(0);
    setState(117);
    match(MikoParserRules::RPAREN);
    setState(118);
    match(MikoParserRules::LBRACE);
    setState(119);
    matchMember();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::COMPILER

    || _la == MikoParserRules::LAMBDA) {
      setState(120);
      matchMember();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(MikoParserRules::RBRACE);
    setState(127);
    match(MikoParserRules::ELSE);
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(128);
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
      case MikoParserRules::COMPILER:
      case MikoParserRules::LAMBDA: {
        setState(129);
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
    setState(132);
    expression(0);
    setState(133);
    match(MikoParserRules::COLON);
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(134);
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
      case MikoParserRules::COMPILER:
      case MikoParserRules::LAMBDA: {
        setState(135);
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


std::any MikoParserRules::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
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
    setState(138);
    match(MikoParserRules::FOR);
    setState(139);
    match(MikoParserRules::LPAREN);
    setState(140);
    define();
    setState(141);
    match(MikoParserRules::SEMIC);
    setState(142);
    expression(0);
    setState(143);
    match(MikoParserRules::SEMIC);
    setState(144);
    expression(0);
    setState(145);
    match(MikoParserRules::RPAREN);
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(146);
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
      case MikoParserRules::COMPILER:
      case MikoParserRules::LAMBDA: {
        setState(147);
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
    setState(150);
    match(MikoParserRules::WHILE);
    setState(151);
    match(MikoParserRules::LPAREN);
    setState(152);
    expression(0);
    setState(153);
    match(MikoParserRules::RPAREN);
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::LBRACE: {
        setState(154);
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
      case MikoParserRules::COMPILER:
      case MikoParserRules::LAMBDA: {
        setState(155);
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
    setState(158);
    match(MikoParserRules::RETURN);
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::COMPILER

    || _la == MikoParserRules::LAMBDA) {
      setState(159);
      expression(0);
    }
    setState(162);
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
    setState(164);
    match(MikoParserRules::OPEN);
    setState(165);
    expression(0);
    setState(166);
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
    setState(168);
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
    setState(170);
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


std::any MikoParserRules::DefineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineStatementContext* MikoParserRules::defineStatement() {
  DefineStatementContext *_localctx = _tracker.createInstance<DefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, MikoParserRules::RuleDefineStatement);

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
    defineKeyword();
    setState(173);
    define();
    setState(174);
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


std::any MikoParserRules::DefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefine(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineContext* MikoParserRules::define() {
  DefineContext *_localctx = _tracker.createInstance<DefineContext>(_ctx, getState());
  enterRule(_localctx, 24, MikoParserRules::RuleDefine);
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
    setState(176);
    defineExpression();
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::ASS) {
      setState(177);
      match(MikoParserRules::ASS);
      setState(178);
      expression(0);
    }
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(181);
      match(MikoParserRules::COMMA);
      setState(182);
      defineExpression();
      setState(185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MikoParserRules::ASS) {
        setState(183);
        match(MikoParserRules::ASS);
        setState(184);
        expression(0);
      }
      setState(191);
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


std::any MikoParserRules::DefineExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineExpressionContext* MikoParserRules::defineExpression() {
  DefineExpressionContext *_localctx = _tracker.createInstance<DefineExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, MikoParserRules::RuleDefineExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(MikoParserRules::ID);
    setState(193);
    match(MikoParserRules::COLON);
    setState(194);
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


std::any MikoParserRules::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::TypeContext* MikoParserRules::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 28, MikoParserRules::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(196);
      call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(197);
      call();
      setState(198);
      match(MikoParserRules::LBRACK);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8022176487702576) != 0) || _la == MikoParserRules::COMPILER

      || _la == MikoParserRules::LAMBDA) {
        setState(199);
        expression(0);
      }
      setState(202);
      match(MikoParserRules::RBRACK);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(204);
      structType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(205);
      defineEnum();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(206);
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
    setState(209);
    match(MikoParserRules::STRUCT);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(210);
      match(MikoParserRules::LPAREN);
      setState(211);
      call();
      setState(212);
      match(MikoParserRules::RPAREN);
    }
    setState(216);
    match(MikoParserRules::LBRACE);
    setState(217);
    structBody();
    setState(218);
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

std::vector<MikoParserRules::OpenStatementContext *> MikoParserRules::StructBodyContext::openStatement() {
  return getRuleContexts<MikoParserRules::OpenStatementContext>();
}

MikoParserRules::OpenStatementContext* MikoParserRules::StructBodyContext::openStatement(size_t i) {
  return getRuleContext<MikoParserRules::OpenStatementContext>(i);
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


std::any MikoParserRules::StructBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitStructBody(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::StructBodyContext* MikoParserRules::structBody() {
  StructBodyContext *_localctx = _tracker.createInstance<StructBodyContext>(_ctx, getState());
  enterRule(_localctx, 32, MikoParserRules::RuleStructBody);

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
    setState(222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::OPEN: {
        setState(220);
        openStatement();
        break;
      }

      case MikoParserRules::VAR:
      case MikoParserRules::CONST:
      case MikoParserRules::DEFINE:
      case MikoParserRules::PUBLIC:
      case MikoParserRules::PRIVATE:
      case MikoParserRules::LOCAL:
      case MikoParserRules::STATIC: {
        setState(221);
        structDefineStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(226);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MikoParserRules::OPEN: {
            setState(224);
            openStatement();
            break;
          }

          case MikoParserRules::VAR:
          case MikoParserRules::CONST:
          case MikoParserRules::DEFINE:
          case MikoParserRules::PUBLIC:
          case MikoParserRules::PRIVATE:
          case MikoParserRules::LOCAL:
          case MikoParserRules::STATIC: {
            setState(225);
            structDefineStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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


std::any MikoParserRules::StructDefineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitStructDefineStatement(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::StructDefineStatementContext* MikoParserRules::structDefineStatement() {
  StructDefineStatementContext *_localctx = _tracker.createInstance<StructDefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, MikoParserRules::RuleStructDefineStatement);
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
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(231);
      accessKeyword();
    }
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::STATIC) {
      setState(234);
      match(MikoParserRules::STATIC);
    }
    setState(237);
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


std::any MikoParserRules::DefineEnumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDefineEnum(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::DefineEnumContext* MikoParserRules::defineEnum() {
  DefineEnumContext *_localctx = _tracker.createInstance<DefineEnumContext>(_ctx, getState());
  enterRule(_localctx, 36, MikoParserRules::RuleDefineEnum);
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
    setState(239);
    match(MikoParserRules::ENUM);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::LPAREN) {
      setState(240);
      match(MikoParserRules::LPAREN);
      setState(241);
      call();
      setState(242);
      match(MikoParserRules::RPAREN);
    }
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MikoParserRules::COLON) {
      setState(246);
      match(MikoParserRules::COLON);
      setState(247);
      type();
    }
    setState(250);
    match(MikoParserRules::LBRACE);
    setState(251);
    enumBody();
    setState(252);
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


std::any MikoParserRules::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::EnumBodyContext* MikoParserRules::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 38, MikoParserRules::RuleEnumBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(254);
      match(MikoParserRules::ID);
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::COMMA) {
        setState(255);
        match(MikoParserRules::COMMA);
        setState(256);
        match(MikoParserRules::ID);
        setState(261);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      match(MikoParserRules::ID);
      setState(263);
      match(MikoParserRules::ASS);
      setState(264);
      expression(0);
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MikoParserRules::ID) {
        setState(265);
        match(MikoParserRules::ID);
        setState(266);
        match(MikoParserRules::ASS);
        setState(267);
        expression(0);
        setState(272);
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

MikoParserRules::CompilerCallContext* MikoParserRules::CallContext::compilerCall() {
  return getRuleContext<MikoParserRules::CompilerCallContext>(0);
}

MikoParserRules::ProgramCallContext* MikoParserRules::CallContext::programCall() {
  return getRuleContext<MikoParserRules::ProgramCallContext>(0);
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
  enterRule(_localctx, 40, MikoParserRules::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::COMPILER: {
        enterOuterAlt(_localctx, 1);
        setState(275);
        compilerCall();
        break;
      }

      case MikoParserRules::ID: {
        enterOuterAlt(_localctx, 2);
        setState(276);
        programCall();
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

//----------------- CompilerCallContext ------------------------------------------------------------------

MikoParserRules::CompilerCallContext::CompilerCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MikoParserRules::CompilerCallContext::COMPILER() {
  return getToken(MikoParserRules::COMPILER, 0);
}

MikoParserRules::CallFunctionContext* MikoParserRules::CompilerCallContext::callFunction() {
  return getRuleContext<MikoParserRules::CallFunctionContext>(0);
}

MikoParserRules::CallIdentifierContext* MikoParserRules::CompilerCallContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
}


size_t MikoParserRules::CompilerCallContext::getRuleIndex() const {
  return MikoParserRules::RuleCompilerCall;
}


std::any MikoParserRules::CompilerCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCompilerCall(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::CompilerCallContext* MikoParserRules::compilerCall() {
  CompilerCallContext *_localctx = _tracker.createInstance<CompilerCallContext>(_ctx, getState());
  enterRule(_localctx, 42, MikoParserRules::RuleCompilerCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(279);
      match(MikoParserRules::COMPILER);
      setState(280);
      callFunction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(281);
      match(MikoParserRules::COMPILER);
      setState(282);
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

//----------------- ProgramCallContext ------------------------------------------------------------------

MikoParserRules::ProgramCallContext::ProgramCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MikoParserRules::CallFunctionContext* MikoParserRules::ProgramCallContext::callFunction() {
  return getRuleContext<MikoParserRules::CallFunctionContext>(0);
}

MikoParserRules::CallIdentifierContext* MikoParserRules::ProgramCallContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
}


size_t MikoParserRules::ProgramCallContext::getRuleIndex() const {
  return MikoParserRules::RuleProgramCall;
}


std::any MikoParserRules::ProgramCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitProgramCall(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::ProgramCallContext* MikoParserRules::programCall() {
  ProgramCallContext *_localctx = _tracker.createInstance<ProgramCallContext>(_ctx, getState());
  enterRule(_localctx, 44, MikoParserRules::RuleProgramCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      callFunction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(286);
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


std::any MikoParserRules::CallIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCallIdentifier(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::CallIdentifierContext* MikoParserRules::callIdentifier() {
  CallIdentifierContext *_localctx = _tracker.createInstance<CallIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 46, MikoParserRules::RuleCallIdentifier);

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
    setState(289);
    match(MikoParserRules::ID);
    setState(294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(290);
        match(MikoParserRules::DOT);
        setState(291);
        match(MikoParserRules::ID); 
      }
      setState(296);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
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


std::any MikoParserRules::CallFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitCallFunction(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::CallFunctionContext* MikoParserRules::callFunction() {
  CallFunctionContext *_localctx = _tracker.createInstance<CallFunctionContext>(_ctx, getState());
  enterRule(_localctx, 48, MikoParserRules::RuleCallFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(MikoParserRules::ID);
    setState(298);
    match(MikoParserRules::LPAREN);
    setState(299);
    functionArgs();
    setState(300);
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


std::any MikoParserRules::FunctionArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitFunctionArgs(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::FunctionArgsContext* MikoParserRules::functionArgs() {
  FunctionArgsContext *_localctx = _tracker.createInstance<FunctionArgsContext>(_ctx, getState());
  enterRule(_localctx, 50, MikoParserRules::RuleFunctionArgs);
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
    setState(302);
    expression(0);
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::COMMA) {
      setState(303);
      match(MikoParserRules::COMMA);
      setState(304);
      expression(0);
      setState(309);
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
  enterRule(_localctx, 52, MikoParserRules::RuleAtomExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MikoParserRules::ID:
      case MikoParserRules::COMPILER: {
        enterOuterAlt(_localctx, 1);
        setState(310);
        call();
        break;
      }

      case MikoParserRules::INT: {
        enterOuterAlt(_localctx, 2);
        setState(311);
        match(MikoParserRules::INT);
        break;
      }

      case MikoParserRules::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(312);
        match(MikoParserRules::FLOAT);
        break;
      }

      case MikoParserRules::CHAR: {
        enterOuterAlt(_localctx, 4);
        setState(313);
        match(MikoParserRules::CHAR);
        break;
      }

      case MikoParserRules::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(314);
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


std::any MikoParserRules::DotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitDot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncrementContext ------------------------------------------------------------------

tree::TerminalNode* MikoParserRules::IncrementContext::DADD() {
  return getToken(MikoParserRules::DADD, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::IncrementContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
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


std::any MikoParserRules::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitComma(this);
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

tree::TerminalNode* MikoParserRules::DecrmentContext::DMIN() {
  return getToken(MikoParserRules::DMIN, 0);
}

MikoParserRules::ExpressionContext* MikoParserRules::DecrmentContext::expression() {
  return getRuleContext<MikoParserRules::ExpressionContext>(0);
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
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, MikoParserRules::RuleExpression, precedence);

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
    setState(340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(318);
      match(MikoParserRules::LPAREN);
      setState(319);
      expression(0);
      setState(320);
      match(MikoParserRules::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(322);
      match(MikoParserRules::MIN);
      setState(323);
      expression(20);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(324);
      match(MikoParserRules::BITNOT);
      setState(325);
      expression(19);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(326);
      match(MikoParserRules::NOT);
      setState(327);
      expression(18);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IncrementContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(328);
      match(MikoParserRules::DADD);
      setState(329);
      expression(17);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<DecrmentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(330);
      match(MikoParserRules::DMIN);
      setState(331);
      expression(16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<AssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(332);
      callIdentifier();
      setState(333);
      assignmentOperator();
      setState(334);
      expression(5);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ThisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(336);
      match(MikoParserRules::THIS);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<OpenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(337);
      openExpression();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<LambdaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(338);
      lambdaExpression();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<AtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(339);
      atomExpression();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(380);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(378);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<CommaContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(342);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(343);
          match(MikoParserRules::COMMA);
          setState(344);
          expression(23);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(345);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(346);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 30064771072) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(347);
          expression(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(348);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(349);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::ADD

          || _la == MikoParserRules::MIN)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(350);
          expression(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BitshiftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(351);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(352);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::LSHIFT

          || _la == MikoParserRules::RSHIFT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(353);
          expression(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LogicBoSContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(354);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(355);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4123168604160) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(356);
          expression(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicEqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(357);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(358);
          _la = _input->LA(1);
          if (!(_la == MikoParserRules::DOB_EQ

          || _la == MikoParserRules::NOT_EQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(359);
          expression(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(360);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(361);
          match(MikoParserRules::BITAND);
          setState(362);
          expression(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(363);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(364);
          match(MikoParserRules::BITXOR);
          setState(365);
          expression(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(366);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(367);
          match(MikoParserRules::BITOR);
          setState(368);
          expression(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(369);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(370);
          match(MikoParserRules::AND);
          setState(371);
          expression(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(372);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(373);
          match(MikoParserRules::OR);
          setState(374);
          expression(7);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<DotContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(375);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(376);
          match(MikoParserRules::DOT);
          setState(377);
          call();
          break;
        }

        default:
          break;
        } 
      }
      setState(382);
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

MikoParserRules::CallIdentifierContext* MikoParserRules::OpenExpressionContext::callIdentifier() {
  return getRuleContext<MikoParserRules::CallIdentifierContext>(0);
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
  enterRule(_localctx, 56, MikoParserRules::RuleOpenExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(MikoParserRules::OPEN);
    setState(384);
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


std::any MikoParserRules::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::AssignmentOperatorContext* MikoParserRules::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 58, MikoParserRules::RuleAssignmentOperator);
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
    setState(386);
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


std::any MikoParserRules::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::LambdaExpressionContext* MikoParserRules::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, MikoParserRules::RuleLambdaExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    lambdaHead();
    setState(389);
    match(MikoParserRules::DOT);
    setState(390);
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


std::any MikoParserRules::LambdaHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MikoParserRulesVisitor*>(visitor))
    return parserVisitor->visitLambdaHead(this);
  else
    return visitor->visitChildren(this);
}

MikoParserRules::LambdaHeadContext* MikoParserRules::lambdaHead() {
  LambdaHeadContext *_localctx = _tracker.createInstance<LambdaHeadContext>(_ctx, getState());
  enterRule(_localctx, 62, MikoParserRules::RuleLambdaHead);
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
    setState(392);
    match(MikoParserRules::LAMBDA);
    setState(393);
    match(MikoParserRules::LPAREN);
    setState(397);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MikoParserRules::ID) {
      setState(394);
      define();
      setState(399);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(400);
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
  enterRule(_localctx, 64, MikoParserRules::RuleLambdaBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(406);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(402);
      codeBlock();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(403);
      returncodeBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(404);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(405);
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
  enterRule(_localctx, 66, MikoParserRules::RuleCodeBlock);
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
    setState(408);
    match(MikoParserRules::LBRACE);
    setState(409);
    statement();
    setState(413);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8022176623153214) != 0) || _la == MikoParserRules::COMPILER

    || _la == MikoParserRules::LAMBDA) {
      setState(410);
      statement();
      setState(415);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(416);
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

MikoParserRules::TypeContext* MikoParserRules::ReturncodeBlockContext::type() {
  return getRuleContext<MikoParserRules::TypeContext>(0);
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
  enterRule(_localctx, 68, MikoParserRules::RuleReturncodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    type();
    setState(419);
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
    case 27: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
