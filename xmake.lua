add_requires("libsdl",{alias="sdl"})

-- add_requires("libcurl",{alias="curl"})
-- add_requires("libgit2", {configs = {shared = true}})

-- xmake f -p wasm
if is_plat("wasm") then
    -- xmake f -v -y -p wasm --links=websocket.js 
    --  xmake f -v -y -p wasm --links=websocket.js --cxxflags="-s ALLOW_MEMORY_GROWTH=1 --preload-file $(pwd)/data" 
    target("PerfBee")
        set_license("MIT")
        set_kind("binary")
        set_languages("cxx17")
        set_arch("x64")
        set_policy("check.auto_ignore_flags", false)
        add_ldflags("-lidbfs.js -s ALLOW_MEMORY_GROWTH=1 -s EXPORTED_RUNTIME_METHODS=['ccall','cwrap'] --preload-file data")
        -- add_ldflags({"--preload-file", "data"}, {expand = false, force = true})
        add_files("imgui/**.cpp","implot/**.cpp", "src/**.cpp")
        add_includedirs("imgui","implot","imgui/backends","src")
        add_files("easywsclient/emscripten_easywsclient.cpp")
        add_includedirs("easywsclient")
        add_files("protocol/*.cc","protocol/lib/libprotobuf.so.o")
        add_includedirs("protocol","protocol/include")
        add_packages("sdl")
else
    -- xmake f -p windows -a x64
    add_requires("glew")
    add_requires("opengl")
    add_repositories("my-repo my-repositories")
    add_requires("protobuf-cpp 3.9.0")
    -- add_requires("libcurl")
    -- vs开发使用
    add_rules("mode.release","mode.debug")
    target("PerfBee")
        set_license("MIT")
        set_kind("binary")
        set_languages("cxx17")
        set_arch("x64")
        add_defines("SDL_MAIN_HANDLED")
        add_files("imgui/**.cpp","implot/**.cpp", "src/**.cpp")
        add_includedirs("imgui","implot","imgui/backends","src")
        add_files("easywsclient/easywsclient.cpp")
        add_includedirs("easywsclient")
        add_files("protocol/*.cc")
        add_includedirs("protocol","protocol/include")
        add_packages("sdl","glew","opengl","protobuf-cpp")

        after_build(function (target)
            --print("--------------".."$(buildir)/")
             -- build/windows/x64/debug
            os.cp("$(projectdir)/python_scripts", "$(buildir)/$(plat)/$(arch)/$(mode)/")
            os.cp("$(projectdir)/python_env", "$(buildir)/$(plat)/$(arch)/$(mode)/")
            os.cp("$(projectdir)/data/*.*", "$(buildir)/$(plat)/$(arch)/$(mode)/")
        end)
end

-- 生成clion可识别的 compile_commands
-- xmake project -k compile_commands
