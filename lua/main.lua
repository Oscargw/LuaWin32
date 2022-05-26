-- print(' - main.lua -')
-- print(' - main.lua -, package.path = ', package.path)
-- print(' - main.lua -, package.path = ', package.path)

-- 目录遍历
-- package.path = "E:\\CodeTest_Self\\Github\\LuaWin32\\lua\\?.lua;"..package.path
package.path = "..\\lua\\?.lua;"..package.path
require('include')

function _main_()
    testA()
end

_main_()
