#ifndef LLAMA_CPP_H
#define LLAMA_CPP_H

#include <string>

#include "llama.h"

std::vector<llama_token> llama_tokenize(
        struct llama_context * ctx,
                 std::string   text,
                        bool   add_bos);

#endif
