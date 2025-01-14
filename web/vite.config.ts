import { defineConfig } from 'vite'
import preact from '@preact/preset-vite'
import viteCompression from 'vite-plugin-compression'

// https://vitejs.dev/config/
export default defineConfig({
  plugins: [preact(), viteCompression({
    deleteOriginFile: true,
    ext: '.gz'
  })]
})
