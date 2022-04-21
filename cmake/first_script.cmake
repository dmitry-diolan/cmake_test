include_guard()

list(APPEND CMAKE_MESSAGE_CONTEXT "first_script")

message(VERBOSE "inside first_script.cmake")
function(test_context)
	list(APPEND CMAKE_MESSAGE_CONTEXT "test_context")
	list(APPEND CMAKE_MESSAGE_INDENT "  ")
	message("inside test_context function")
endfunction()