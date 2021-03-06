/**
* @file string_common_StringOP.cpp
* @brief Example of the referred class.
*
* @section LICENSE
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR/AUTHORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* @author uknown
* @bug No known bugs.
* @version 0.1.0.0
*
*/


#include <algorithm>            // std::min, std::max
#include <string>
#include <ctime>
#include <regex>
#include <iostream>
#include <sstream>      // std::stringstream

#include "../../commonobjects/string_common/StringOp.hpp"

void main() {
	std::cout << "StringOp" << std::endl;


	// split
	std::cout << ">> split" << std::endl;
	std::string sentence = "This is an example";
	auto words = co::text::StringOp::split(sentence, ' ');
	int num = 0;
	for (auto it : words) {
		std::cout << "word[" << num << "]: " << it << std::endl;
		++num;
	}

	std::cout << ">> append" << std::endl;
	auto res0 = co::text::StringOp::append_front_chars(6, 12, '0');
	std::cout << "res_append:" << res0 << std::endl;

	std::cout << ">> append" << std::endl;
	auto res1 = co::text::StringOp::string_padded2number(res0, '0');
	std::cout << "res_padded2number:" << res1 << std::endl;

}